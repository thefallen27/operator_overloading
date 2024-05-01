#include <iostream>
#include <tuple>

class Time
{
public:
    Time() = default;

    Time(int x, int y, int z) : HR{ x }, MIN{ y }, SEC{ z } {}

    void ShowTime() const { std::cout << HR << ":" << MIN << ":" << SEC << std::endl; }

    void Normalize()
    {
        std::tie(MIN, SEC) = std::tuple{ MIN + SEC / 60, SEC % 60 };
        std::tie(HR, MIN) = std::tuple{ HR + MIN / 60, MIN % 60 };
    }

    Time operator + (const Time& t) const
    {
        Time temp(HR + t.HR, MIN + t.MIN, SEC + t.SEC);
        temp.Normalize();
        return temp;
    }

private:
    int HR{}, MIN{}, SEC{};

};

int main()
{
    int hour, minute, seconds;
    std::cout << "Enter time for t1 (hours minutes seconds): ";
    std::cin >> hour >> minute >> seconds;
    Time t1(hour, minute, seconds);

    std::cout << "Enter time for t2 (hours minutes seconds): ";
    std::cin >> hour >> minute >> seconds;
    Time t2(hour, minute, seconds);

    Time t3 = t1 + t2;

    std::cout << "Time t1: ";
    t1.ShowTime();
    std::cout << "Time t2: ";
    t2.ShowTime();
    std::cout << "Sum of t1 and t2: ";
    t3.ShowTime();
    std::cout << std::endl;

    return 0;
}
