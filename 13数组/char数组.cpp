#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    char  var[MAX] = {'a', 'b', 'c'};
    char  *ptr;

    // 指针中的数组地址
    ptr = var;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << (int *)ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
    return 0;
}