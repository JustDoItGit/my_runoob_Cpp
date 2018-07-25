#include <iostream>
using namespace std;

/* 局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值 */
// 全局变量声明
int g = 20;

int main(int argc, char const *argv[])
{
    // 局部变量声明
    int g = 10;

    cout << g << endl;
    return 0;
}