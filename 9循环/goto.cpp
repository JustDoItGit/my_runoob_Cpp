#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
LOOP:
    do
    {
        if (a == 15)
        {
            a++;
            goto LOOP;
        }
        cout << "a 的值: " << a << endl;
        a++;
    }
    while (a < 20);
    return 0;
}