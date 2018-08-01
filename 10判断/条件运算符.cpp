#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y = 10;

    x = (y < 10) ? 30 : 40;
    cout << "value of x: " << x << endl;
    return 0;
}