#include <iostream>
using namespace std;

int main ()
{
    // 局部变量声明
    int a = 10;

    // do 循环执行
    do
    {
        cout << "a 的值：" << a << endl;
        a = a + 1;
        if( a > 15)
        {
            // 终止循环
            break;
        }
    }
    while( a < 20 );

    return 0;
}