#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    int  var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; // 赋值为整数的地址 ****这里ptr的每个元素必须赋值为地址
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }
    return 0;
}