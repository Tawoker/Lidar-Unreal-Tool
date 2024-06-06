#include "rclcpp/rclcpp.hpp"
#include <memory>
#include "ue_connector/shm/subscriber.hpp"

void print_msg(const std::vector<uint8_t> &msg)
{
    for (auto c : msg)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("ue_sub");

    try
    {
        shm::Subscriber sub("pub", 5);

        std::vector<uint8_t> msg;
        uint32_t msg_id;

        RCLCPP_INFO(node->get_logger(), "Create sub...");
        sub.create();

        std::cout << "SHM size = " << sub.shm_size() << std::endl;
        std::cout << "MSG size = " << sub.msg_size() << std::endl;

        RCLCPP_INFO(node->get_logger(), "Start listening...");
        while (rclcpp::ok())
        {
            if (!sub.read(msg, msg_id))
            {
                continue;
            }

            std::cout << msg_id << " - ";
            print_msg(msg);

            sleep(1);
        }
    }
    catch (std::string s)
    {
        std::cout << "ERROR" << s << std::endl;
    }

    return 0;
}