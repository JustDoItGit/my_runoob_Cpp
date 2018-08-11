#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance();
    Distance(int f, int i);
    // 重载 =
    void operator = (const Distance &D);
    // 显示距离的方法
    void displayDistance();
};

Distance::Distance()
{
    feet = 0;
    inches = 0;
}
Distance::Distance(int f, int i)
{
    feet = f;
    inches = i;
}
void Distance::operator=(const Distance &D)
{
    feet = D.feet;
    inches = D.inches;
}
void Distance::displayDistance()
{
    cout << "F:" << feet <<  " I:" <<  inches << endl;
}

int main(int argc, char const *argv[])
{
    Distance D1(11, 10), D2(5, 11);

    cout << "First Distance : ";
    D1.displayDistance();
    cout << "Second Distance :";
    D2.displayDistance();

    // 使用赋值运算符
    D1 = D2;
    cout << "First Distance :";
    D1.displayDistance();
    return 0;
}