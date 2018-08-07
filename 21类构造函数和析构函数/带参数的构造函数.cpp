#include <iostream>
using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len); // 这是带参数的构造函数
private:
    double length;
};

// 成员函数定义，包括构造函数
Line::Line(double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main(int argc, char const *argv[])
{
    Line line(10.0);

    // 获取默认长度
    cout << "Default length of line : " << line.getLength() << endl;

    // 再次设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}