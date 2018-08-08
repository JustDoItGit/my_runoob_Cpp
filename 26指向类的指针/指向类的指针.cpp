#include <iostream>
using namespace std;

class Box
{
public:
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called" << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    void setLBH(double l, double b, double h);
private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};

void Box::setLBH(double l, double b, double h)
{
	length = l;
	breadth = b;
	height = h;
}

int main(int argc, char const *argv[])
{
    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0);    // Declare box2
    Box *ptrBox;				// Declare pointer to a class.
    Box &Box3 = Box1;        	// 引用必须在创建的时候初始化       

    Box3.setLBH(3.0, 3.0, 3.0);
    // 保存第一个对象的地址
    ptrBox = &Box1;

    // 现在尝试使用成员访问运算符来访问成员
    cout << "Volume of Box1: " << ptrBox->Volume() << endl;

    // 保存第二个对象的地址
    ptrBox = &Box2;

    // 现在尝试使用成员访问运算符来访问成员
    cout << "Volume of Box2: " << ptrBox->Volume() << endl;

    // 保存第一个对象的地址
    cout << "指针和引用都指向Box1" << endl;
    ptrBox = &Box1;
    Box3.setLBH(3.0, 3.0, 3.0);
    cout << "Volume of ptrBox: " << ptrBox->Volume() << endl;
    cout << "Volume of Box3: " << Box3.Volume() << endl;

    ptrBox->setLBH(2.0, 2.0, 2.0);
    cout << "Volume of ptrBox: " << ptrBox->Volume() << endl;
    cout << "Volume of Box3: " << Box3.Volume() << endl;

    return 0;
}