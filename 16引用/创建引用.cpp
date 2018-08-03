#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    double d;

    int &r = i;
    double &s = d;
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
    return 0;
}