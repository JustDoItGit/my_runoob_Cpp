#include <iostream>
using namespace std;

#define MIN(a, b)  (a < b ? a:b)

int main(int argc, char const *argv[])
{
    int i, j;
    i = 100;
    j = 30;
    cout << "较小的值为：" << MIN(i, j) << endl;
    return 0;
}