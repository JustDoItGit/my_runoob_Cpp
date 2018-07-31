#include <iostream>
using namespace std;

int main ()
{
    // 局部变量声明
    int a = 100;

    // 检查布尔条件
    if( a == 10 )
    {
        // 如果 if 条件为真，则输出下面的语句
        cout << "a 的值是 10" << endl;
    }
    else if( a == 20 )
    {
        // 如果 else if 条件为真，则输出下面的语句
        cout << "a 的值是 20" << endl;
    }
    else if( a == 30 )
    {
        // 如果 else if 条件为真，则输出下面的语句
        cout << "a 的值是 30" << endl;
    }
    else
    {
        // 如果上面条件都不为真，则输出下面的语句
        cout << "没有匹配的值" << endl;
    }
    cout << "a 的准确值是 " << a << endl;

    return 0;
}