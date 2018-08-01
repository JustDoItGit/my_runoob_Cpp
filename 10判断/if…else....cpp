#include <iostream>
using namespace std;

int main ()
{
    // 局部变量声明
    int a = 100;

    // 检查布尔条件
    if( a < 20 )
    {
        // 如果条件为真，则输出下面的语句
        cout << "a 小于 20" << endl;
    }
    else
    {
        // 如果条件为假，则输出下面的语句
        cout << "a 大于 20" << endl;
    }
    cout << "a 的值是 " << a << endl;

    return 0;
}