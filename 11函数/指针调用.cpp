#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;

    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;

    /* 调用函数来交换值
     * &a 表示指向 a 的指针，即变量 a 的地址
     * &b 表示指向 b 的指针，即变量 b 的地址
     */
    swap(&a, &b);

    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
    return 0;
}

void swap(int *x, int *y)
{
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
    return;
}