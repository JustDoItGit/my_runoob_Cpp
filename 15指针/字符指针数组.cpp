#include <iostream>

using namespace std;
const int MAX = 4;

int main ()
{
    const char *names[MAX] =
    {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;
    }
    return 0;
}