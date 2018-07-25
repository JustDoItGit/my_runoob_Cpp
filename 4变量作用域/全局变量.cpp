#include <iostream>
using namespace std;

// 全局变量声明
int g;

int main(int argc, char const *argv[])
{
    // 局部变量声明
    int a, b;

    // 实际初始化
    a = 10;
    b = 20;
    g = a + b;

    cout << g << endl;
    return 0;
}