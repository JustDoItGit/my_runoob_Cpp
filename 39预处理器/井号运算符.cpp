#include <iostream>
using namespace std;

#define MKSTR(x) #x

int main(int argc, char const *argv[])
{
    cout << MKSTR(HELLO C++) << endl;
    return 0;
}