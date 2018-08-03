#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


/*
C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。
*/

int *getRandom()
{
    static int r[10]; // 必须static

    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}

int main(int argc, char const *argv[])
{
    int *p;

    p = getRandom();

    for (int i = 0; i < 10; ++i)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    return 0;
}