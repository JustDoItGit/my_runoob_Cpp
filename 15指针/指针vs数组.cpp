/*#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    int  var[MAX] = {10, 100, 200};
    int  *ptr;

    // 指针中的数组地址
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "var[" << i << "]的内存地址为 ";
        cout << ptr << endl;

        cout << "var[" << i << "] 的值为 ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
    return 0;
}*/


#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    int  var[MAX] = {10, 100, 200};

    for (int i = 0; i < MAX; i++)
    {
        // *var = i;    // 这是正确的语法
        // var++;       // 这是不正确的
        *(var + i) = i;
    }
    for (int i = 0; i < MAX; ++i)
    {
        cout << var[i] << endl;
    }
    return 0;
}
