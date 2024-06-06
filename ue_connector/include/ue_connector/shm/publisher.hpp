#pragma once

#include <string>
#include <vector>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>

namespace shm
{
    class Publisher
    {
    public:
        explicit Publisher(const std::string &key_name, size_t msg_size);
        ~Publisher();

        void create();
        void send(const std::vector<uint8_t> &msg);
        void unlink();

        uint32_t msg_id() const { return *msg_id_ptr_; }

        size_t msg_size() const { return msg_size_; }
        size_t shm_size() const { return shm_size_; }

    private:
        const std::string KEY_NAME;
        const std::string SEM_MUTEX_NAME;
        const std::string SEM_BUFFER_COUNT_NAME;
        const std::string SEM_SPOOL_SIGNAL_NAME;
        const std::string SHARED_MEM_NAME;
        const size_t msg_size_;
        const size_t shm_size_;

        void lock();
        void unlock();
        
        void *shared_mem_ptr_;
        uint32_t *msg_id_ptr_;
        uint8_t *msg_ptr_;

        int fd_shm_;
        sem_t *mutex_sem_;
    };

}