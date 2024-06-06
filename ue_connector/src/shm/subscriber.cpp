#include "ue_connector/shm/subscriber.hpp"

#include <iostream>

namespace shm
{
    Subscriber::Subscriber(const std::string &key_name, size_t msg_size) : KEY_NAME(key_name),
                                                                           SEM_MUTEX_NAME("/sem_mutex_" + KEY_NAME),
                                                                           SHARED_MEM_NAME("/shm_" + KEY_NAME),
                                                                           msg_size_(msg_size),
                                                                           shm_size_(msg_size_ + sizeof(uint32_t))
    {
    }

    Subscriber::~Subscriber()
    {
        unlink();
    }

    void Subscriber::create()
    {
        //  mutual exclusion semaphore, mutex_sem
        if ((mutex_sem_ = sem_open(SEM_MUTEX_NAME.c_str(), O_CREAT, 0660, 0)) == SEM_FAILED)
        {
            throw std::string("Create mutex_sem error: " + SEM_MUTEX_NAME);
        }

        // Get shared memory
        if ((fd_shm_ = shm_open(SHARED_MEM_NAME.c_str(), O_RDONLY | O_CREAT, 0660)) == -1)
        {
            throw std::string("Get shared error: " + SHARED_MEM_NAME);
        }

        if ((shared_mem_ptr_ = mmap(NULL, shm_size_, PROT_READ, MAP_SHARED,
                                    fd_shm_, 0)) == MAP_FAILED)
        {
            throw std::string("Attach shared memory error: mmap " + SHARED_MEM_NAME + " " + std::to_string(shm_size_));
        }

        // Initialize the shared memory
        msg_id_ptr_ = reinterpret_cast<uint32_t *>(shared_mem_ptr_);

        uint32_t *pose = msg_id_ptr_;
        pose++;
        msg_ptr_ = reinterpret_cast<uint8_t *>(pose);

        lock();
        last_msg_id_ = (*msg_id_ptr_);
        unlock();
    }

    bool Subscriber::read(std::vector<uint8_t> &msg, uint32_t &msg_id)
    {
        msg.resize(msg_size_);

        // P (mutex_sem);
        lock();

        // Critical section
        if (last_msg_id_ == (*msg_id_ptr_))
        {
            unlock();
            return false;
        }
        last_msg_id_ = (*msg_id_ptr_);

        uint8_t *cp = msg_ptr_;
        for (size_t i = 0; i < msg_size_; i++)
        {
            msg[i] = *cp;
            cp++;
        }

        // Release mutex sem: V (mutex_sem)
        unlock();

        msg_id = last_msg_id_;

        return true;
    }

    void Subscriber::unlink()
    {
        if (munmap(shared_mem_ptr_, shm_size_) == -1)
        {
            std::cout << "ERROR munmap shared memory: " << SHARED_MEM_NAME << std::endl;
        }
        unlock();
    }

    void Subscriber::lock()
    {
        if (sem_wait(mutex_sem_) == -1)
        {
            throw std::string("sem_wait: mutex_sem lock " + SEM_MUTEX_NAME);
        }
    }

    void Subscriber::unlock()
    {
        if (sem_post(mutex_sem_) == -1)
        {
            throw std::string("sem_post: mutex_sem unlock " + SEM_MUTEX_NAME);
        }
    }
}