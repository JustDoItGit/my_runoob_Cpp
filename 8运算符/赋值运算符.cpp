#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int c ;

    c =  a;
    cout << "Line 1 - =  运算符实例，c 的值 = : " << c << endl ;

    c +=  a;
    cout << "Line 2 - += 运算符实例，c 的值 = : " << c << endl ;

    c -=  a;
    cout << "Line 3 - -= 运算符实例，c 的值 = : " << c << endl ;

    c *=  a;
    cout << "Line 4 - *= 运算符实例，c 的值 = : " << c << endl ;

    c /=  a;
    cout << "Line 5 - /= 运算符实例，c 的值 = : " << c << endl ;

    c  = 200;
    c %=  a;
    cout << "Line 6 - %= 运算符实例，c 的值 = : " << c << endl ;

    c <<=  2;
    cout << "Line 7 - <<= 运算符实例，c 的值 = : " << c << endl ;

    c >>=  2;
    cout << "Line 8 - >>= 运算符实例，c 的值 = : " << c << endl ;

    c &=  2;
    cout << "Line 9 - &= 运算符实例，c 的值 = : " << c << endl ;

    c ^=  2;
    cout << "Line 10 - ^= 运算符实例，c 的值 = : " << c << endl ;

    c |=  2;
    cout << "Line 11 - |= 运算符实例，c 的值 = : " << c << endl ;

    return 0;
}