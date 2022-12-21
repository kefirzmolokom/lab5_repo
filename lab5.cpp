#include "lab5.h"

int main()
{
    TimeConverter TimeConverter;
    int seconds;
    std::string time;
    int user_input;

    std::cout << "from hh:mm:ss to seconds or vice versa?"
              << std::endl
              << "print 1 for first option and 0 for second: ";
    std::cin >> user_input;

    if (user_input == 1)
    {
        std::cout << "now input hh:mm:ss -> ";
        std::cin >> time;
        TimeConverter.output_converted_time(time);
    }
    else
    {
        std::cout << "now input seconds -> ";
        std::cin >> seconds;
        TimeConverter.output_converted_time(seconds);
    }
    return 0;
}
