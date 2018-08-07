#include <iostream>
using namespace std;

/*
声明拷贝构造函数
public:
	classname(const classname &obj);

拷贝构造函数的最常见形式
classname(const classname &obj)
{
   // 构造函数的主体
}
*/

class Line
{
public:
    int getLength(void);
    Line(int len);	// 简单的构造函数
    Line(const Line &obj);	// 拷贝构造函数
    ~Line();	// 析构函数
private:
    int *ptr;
};

Line::Line(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}

Line::~Line()
{
    cout << "释放内存" << endl;
    delete ptr;
}

int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "line 大小 : " << obj.getLength() << endl;
}

int main(int argc, char const *argv[])
{
    Line line(10);

    display(line);
    return 0;
}