#include <iostream>
#include <string>

class TimeConverter
{
public:
    void output_converted_time(std::string time)
    {
        int hh;
        int mm;
        int ss;

        hh = std::stoi(time.substr(0, 2));
        mm = std::stoi(time.substr(3, 2));
        ss = std::stoi(time.substr(6, 2));

        output_converted_time(hh, mm, ss);
    }

    void output_converted_time(int hh, int mm, int ss)
    {
        int seconds;
        int seconds_in_hour = 3600;
        int seconds_in_minute = 60;
        seconds = hh * seconds_in_hour + mm * seconds_in_minute + ss;

        std::cout << seconds << std::endl;
    }
    void output_converted_time(int seconds)
    {
        int hh;
        int mm;
        int ss;
        int seconds_in_hour = 3600;
        int seconds_in_minute = 60;
        char time[9];

        hh = seconds / seconds_in_hour;
        seconds -= hh * seconds_in_hour;

        mm = seconds / seconds_in_minute;
        seconds -= mm * seconds_in_minute;

        ss = seconds;

        sprintf(time, "%02d:%02d:%02d", hh, mm, ss);
        std::cout << time << std::endl;
    }
};