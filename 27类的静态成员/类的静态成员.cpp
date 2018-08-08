#include <iostream>
using namespace std;

class Box
{
public:
    static int objectCount;
    // 构造函数定义
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // 每次创建对象时增加 1
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
private:
    double length;     // 长度
    double breadth;    // 宽度
    double height;     // 高度
};

// 初始化类 Box 的静态成员
int Box::objectCount = 0;

int main(int argc, char const *argv[])
{
	Box Box1(3.3, 1.2, 1.5);
	cout << "Box1 object: " << Box1.objectCount << endl;
	cout << "Total object: " << Box::objectCount << endl;
	Box Box2(8.5, 6.0, 2.0);
	cout << "Box1 object: " << Box1.objectCount << endl;
	cout << "Box2 object: " << Box2.objectCount << endl;
	// 输出对象的总数
	cout << "Total object: " << Box::objectCount << endl;
	return 0;
}