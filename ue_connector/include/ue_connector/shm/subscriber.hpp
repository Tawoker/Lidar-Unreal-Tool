#pragma once

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

#include <optional>
#include <string>
#include <vector>

namespace shm
{
    class Subscriber
    {
    public:
        Subscriber(const std::string &key_name, size_t msg_size);
        ~Subscriber();

        void create();
        bool read(std::vector<uint8_t> &msg, uint32_t &msg_id);
        void unlink();

        size_t msg_size() const { return msg_size_; }
        size_t shm_size() const { return shm_size_; }

    private:
        const std::string KEY_NAME;
        const std::string SEM_MUTEX_NAME;
        const std::string SHARED_MEM_NAME;
        const size_t msg_size_;
        const size_t shm_size_;

        void lock();
        void unlock();

        uint32_t last_msg_id_ = 0;

        void *shared_mem_ptr_;
        uint32_t *msg_id_ptr_;
        uint8_t *msg_ptr_;

        int fd_shm_;
        sem_t *mutex_sem_;
    };
}