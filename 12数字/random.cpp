#include <iostream>
#include <stdio.h>
#include <time.h>
#define random(x)(rand()%x)

using namespace std;

int main(int argc, char const *argv[])
{
    srand((int)time(0));
    for (int i = 0; i < 10; ++i)
    {
        cout << random(100) << endl;
    }
    return 0;
}