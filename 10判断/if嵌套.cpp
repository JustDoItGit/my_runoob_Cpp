#include <iostream>
using namespace std;

int main ()
{
    // 局部变量声明
    int a = 100;
    int b = 200;

    // 检查布尔条件
    if( a == 100 )
    {
        // 如果条件为真，则检查下面的条件
        if( b == 200 )
        {
            // 如果条件为真，则输出下面的语句
            cout << "a 的值是 100，且 b 的值是 200" << endl;
        }
    }
    cout << "a 的准确值是 " << a << endl;
    cout << "b 的准确值是 " << b << endl;

    return 0;
}