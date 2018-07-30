#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - c = a + b 的值是 " << c << endl;
    c = a - b;
    cout << "Line 2 - c = a - b 的值是 " << c << endl ;
    c = a * b;
    cout << "Line 3 - c = a * b 的值是 " << c << endl ;
    c = a / b;
    cout << "Line 4 - c = a / b 的值是 " << c << endl ;
    c = a % b;
    cout << "Line 5 - c = a % b 的值是 " << c << endl ;

    int d = 10;   //  测试自增、自减
    c = d++;
    cout << "Line 6 - c 的值是 " << c << endl ;

    d = 10;    // 重新赋值
    c = d--;
    cout << "Line 7 - c 的值是 " << c << endl ;
    return 0;

}