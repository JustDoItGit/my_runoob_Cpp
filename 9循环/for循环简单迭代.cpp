#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    int my_array[5] = {1, 2, 3, 4, 5};

    for(int &x : my_array)
    {
        x *= 2;
        cout << x << endl;
    }

    for (auto &x : my_array)
    {
        x *= 2;
        cout << x << endl;
    }

    string str("some string");
    for(auto &c : str)
    {
        c = toupper(c);
    }
    cout << str << endl;
    return 0;
}