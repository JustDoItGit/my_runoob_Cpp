#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    cout << "(a + b) * c / d 的值是 " << e << endl ;

    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    cout << "((a + b) * c) / d 的值是 " << e << endl ;

    e = (a + b) * (c / d);   // (30) * (15/5)
    cout << "(a + b) * (c / d) 的值是 " << e << endl ;

    e = a + (b * c) / d;     //  20 + (150/5)
    cout << "a + (b * c) / d 的值是 " << e << endl ;

    return 0;
}