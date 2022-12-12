#include <iostream>
#include "lab5.h"

int main()
{
    TimeConverter timeconverter;
    int seconds;
    std::string time;
    int UserInput;

    std::cout << "from hh:mm:ss to seconds or vice versa?"
              << std::endl
              << "print 1 for first option and 0 for second: ";
    std::cin >> UserInput;

    if (UserInput == 1)
    {
        std::cout << "now input hh:mm:ss -> ";
        std::cin >> time;
        timeconverter.outputConvertedTime(time);
    }
    else
    {
        std::cout << "now input seconds -> ";
        std::cin >> seconds;
        timeconverter.outputConvertedTime(seconds);
    }
    return 0;
}
