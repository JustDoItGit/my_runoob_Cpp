#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "Greeting message: ";
    cout << greeting << endl;
    return 0;
}