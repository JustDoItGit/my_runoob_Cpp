#include <iostream>
using namespace std;

int main ()
{
    // 局部变量声明
    int a = 10;

    // do 循环执行
    do
    {
        if( a == 15)
        {
            // 跳过迭代
            a = a + 1;
            continue;
        }
        cout << "a 的值：" << a << endl;
        a = a + 1;
    }
    while( a < 20 );

    return 0;
}