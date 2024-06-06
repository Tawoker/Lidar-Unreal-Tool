// Fill out your copyright notice in the Description page of Project Settings.

#include "ue_connector/shm/publisher.hpp"

#include <iostream>

namespace shm
{
    Publisher::Publisher(const std::string &key_name, size_t msg_size) : KEY_NAME(key_name),
                                                                         SEM_MUTEX_NAME("/sem_mutex_" + KEY_NAME),
                                                                         SHARED_MEM_NAME("/shm_" + KEY_NAME),
                                                                         msg_size_(msg_size),
                                                                         shm_size_(msg_size_ + sizeof(uint32_t))
    {
    }

    Publisher::~Publisher()
    {
        unlink();
        close(fd_shm_);
    }

    void Publisher::create()
    {
        //  mutual exclusion semaphore, mutex_sem with an initial value 0.
        if ((mutex_sem_ = sem_open(SEM_MUTEX_NAME.c_str(), O_CREAT, 0660, 0)) == SEM_FAILED)
        {
            throw std::string("ERROR CREATING SEMAPHORE: " + SEM_MUTEX_NAME);
        }

        // Get shared memory
        if ((fd_shm_ = shm_open(SHARED_MEM_NAME.c_str(), O_RDWR | O_CREAT, 0660)) == -1)
        {
            throw std::string("ERROR GET SHARED MEMORY SEGMEN: " + SHARED_MEM_NAME);
        }

        if (ftruncate(fd_shm_, shm_size_) == -1)
        {
            throw std::string("ERROR ftruncate SHARED MEMORY: " + SHARED_MEM_NAME);
        }

        if ((shared_mem_ptr_ = mmap(NULL, shm_size_, PROT_READ | PROT_WRITE, MAP_SHARED,
                                    fd_shm_, 0)) == MAP_FAILED)
        {
            throw std::string("ERROR ATTACH SHARED MEMORY SEGMENT: %s" + std::to_string(shm_size_));
        }

        // Initialize the shared memory
        msg_id_ptr_ = reinterpret_cast<uint32_t *>(shared_mem_ptr_);

        uint32_t *pose = msg_id_ptr_;
        pose++;
        msg_ptr_ = reinterpret_cast<uint8_t *>(pose);

        lock();
        (*msg_id_ptr_) = 0;
        unlock();
    }

    void Publisher::send(const std::vector<uint8_t> &msg)
    {
        if (msg.size() > shm_size_)
        {
            throw std::string("Msg is more than shared memory " + KEY_NAME);
        }

        // P (mutex_sem);
        lock();

        // Critical section
        (*msg_id_ptr_)++;
        uint8_t *pose = msg_ptr_;
        for (auto c : msg)
        {
            *pose = c;
            pose++;
        }

        // Release mutex sem: V (mutex_sem)
        unlock();
    }

    void Publisher::unlink()
    {
        if (munmap(shared_mem_ptr_, shm_size_) == -1)
        {
            throw std::string("ERROR munmap shared memory: " + SHARED_MEM_NAME);
        }
        unlock();
    }

    void Publisher::lock()
    {
        if (sem_wait(mutex_sem_) == -1)
        {
            throw std::string("sem_wait: mutex_sem lock" + SEM_MUTEX_NAME);
        }
    }

    void Publisher::unlock()
    {
        if (sem_post(mutex_sem_) == -1)
        {
            throw std::string("sem_post: mutex_sem unlock " + SEM_MUTEX_NAME);
        }
    }
}
