#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;
    for (i = 2; i < 100; ++i)
    {
        for (j = 2; j <= (i / j); ++j)
        {
            if(!(i % j))
            {
                break; //如果找到，则不是质数
            }
        }
        if(j > (i / j))
        {
            cout << i << " 是质数\n";
        }

    }
    return 0;
}