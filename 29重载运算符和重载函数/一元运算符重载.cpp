#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    // 显示距离的方法
    void displayDistance()
    {
        cout << "F: " << feet << " I:" << inches << endl;
    }
    // 重载运算符（-）
    Distance operator- ()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }
};

int main(int argc, char const *argv[])
{
    Distance D1(11, 10), D2(-5, 11);

    -D1;
    D1.displayDistance();

    -D2;
    D2.displayDistance();

    int a = 1;
    int b;
    b = -a;
    cout << b << endl;
    return 0;
}