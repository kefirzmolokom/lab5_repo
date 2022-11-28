#include <iostream>

class TimeConverter
{
public:
    void outputConvertedTime(std::string time)
    {
        int hh;
        int mm;
        int ss;

        hh = std::stoi(time.substr(0, 2));
        mm = std::stoi(time.substr(3, 2));
        ss = std::stoi(time.substr(6, 2));

        outputConvertedTime(hh, mm, ss);
    }

    void outputConvertedTime(int hh, int mm, int ss)
    {
        int seconds;
        int secInHour = 3600;
        int secInMinute = 60;
        seconds = hh * secInHour + mm * secInMinute + ss;

        std::cout << seconds << std::endl;
    }
    void outputConvertedTime(int seconds)
    {
        int hh;
        int mm;
        int ss;
        int secInHour = 3600;
        int secInMinute = 60;
        char time[9];

        hh = seconds / secInHour;
        seconds -= hh * secInHour;

        mm = seconds / secInMinute;
        seconds -= mm * secInMinute;

        ss = seconds;

        sprintf(time, "%02d:%02d:%02d", hh, mm, ss);
        std::cout << time << std::endl;
    }
};