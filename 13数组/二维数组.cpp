#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j] << ",\t";
        }
        cout << endl;
    }
    return 0;
}