#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    // 显示时间的方法
    void displayTime();
    // 重载前缀递增运算符（ ++ ）
    Time operator++();
    // 重载后缀递增运算符（ ++ ）
    Time operator++(int);
    // 重载前缀递减运算符（ -- ）
    Time operator--();
    // 重载后缀递减运算符（ -- ）
    Time operator--(int);
};

void Time::displayTime()
{
    cout << "H: " << hours << "\tM: " << minutes << endl;
}
Time Time::operator++()
{
    ++minutes;
    if (minutes >= 60)
    {
        ++hours;
        minutes -= 60;
    }
    return Time(hours, minutes);
}
Time Time::operator++(int)
{
    // 保存原始值
    Time T(hours, minutes);
    ++minutes;
    if (minutes >= 60)
    {
        ++hours;
        minutes -= 60;
    }
    // 返回旧的原始值
    return T;
}
Time Time::operator--()
{
    --minutes;
    if (minutes < 0)
    {
        --hours;
        minutes += 60;
    }
    return Time(hours, minutes);
}
Time Time::operator--(int)
{
    // 保存原始值
    Time T(hours, minutes);
    --minutes;
    if (minutes < 0)
    {
        --hours;
        minutes += 60;
    }
    // 返回旧的原始值
    return T;
}
int main(int argc, char const *argv[])
{
    Time T1(11, 59), T2(10, 40), T3;
    ++T1;
    T1.displayTime();
    ++T1;
    T1.displayTime();

    T3 = T2++;
    cout << "T3: ";
    T3.displayTime();
    T2.displayTime();
    T2++;
    T2.displayTime();

    --T1;
    T1.displayTime();
    --T1;
    T1.displayTime();

    T2--;
    T2.displayTime();
    T2--;
    T2.displayTime();
    return 0;
}