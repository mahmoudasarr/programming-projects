#include <iostream>
#include <unistd.h>

int main()
{
    int hour = 0;
    int minute = 0;
    int second = 0;

    std::cout << "Enter the hour: ";
    std::cin >> hour;
    std::cout << "Enter the minute: ";
    std::cin >> minute;
    std::cout << "Enter the second: ";
    std::cin >> second;

    while (true)
    {
        system("clear"); // Clear terminal
        if (second > 59)
        {
            minute++;
            second = 0;
        }
        if (minute > 59)
        {
            hour++;
            minute = 0;
        }
        if (hour > 23)
        {
            hour = 0;
        }

        std::cout << "Time is: " << '\n';
        std::cout << hour << ":" << minute << ":" << second << '\n';
        second++;
        sleep(1);
    }
}