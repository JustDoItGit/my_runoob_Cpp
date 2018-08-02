#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;

    p = balance;

    cout << "使用指针的数组值 " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "*(p + " << i << "): ";
        cout << *(p + i) << endl;
    }
    cout << "使用指针p++的数组值 " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "*p++ : ";
        cout << *p << endl;
        p++;
    }
    cout << "使用 balance 作为地址的数组值 " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "*(balance + " << i << "): ";
        cout << *(balance + i) << endl;
    }
    return 0;
}