#include "rclcpp/rclcpp.hpp"
#include <memory>
#include "ue_connector/shm/publisher.hpp"

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
    auto node = std::make_shared<rclcpp::Node>("ue_pub");

    try
    {
        shm::Publisher pub("pub", 5);

        std::vector<uint8_t> msg;
        msg.resize(5);

        RCLCPP_INFO(node->get_logger(), "Create pub...");
        pub.create();

        std::cout << "SHM size = " << pub.shm_size() << std::endl;
        std::cout << "MSG size = " << pub.msg_size() << std::endl;
    
        RCLCPP_INFO(node->get_logger(), "Start publishing...");
        while (rclcpp::ok())
        {
            auto id = pub.msg_id();
            std::string str = std::to_string(id);

            msg[0] = 0;
            msg[1] = 0;
            msg[2] = 0;
            msg[3] = 0;
            msg[4] = 0;

            size_t cnt = 0;
            for (auto i = str.rbegin(); i != str.rend(); i++)
            {
                msg[cnt] = *i;
                cnt++;
                if (cnt >=5){
                    break;
                }
            }

            std::cout << id << " send - ";
            print_msg(msg);

            pub.send(msg);
            sleep(1);
        }
    }
    catch (std::string s)
    {
        std::cout << "ERROR" << s << std::endl;
    }

    return 0;
}