#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int i, j;
    for(i = 2; i < 100; i++)
    {
        for(j = 2; j <= (double)sqrt((double)i); j++)
        {
            if(!(i % j))
                break;//不是质数
        }
        if(j > (double)sqrt((double)i))
            cout << i << "是质数\n";
    }
    return 0;
}