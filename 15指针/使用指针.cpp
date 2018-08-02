#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int var = 20;
    int *ip;

    ip = &var;	// 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    return 0;
}