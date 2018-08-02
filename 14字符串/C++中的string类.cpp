#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    str3 = str1;
    cout << "str3 : " << str3 << endl;

    str3 = str1 + str2;
    cout << "str3 : " << str3 << endl;

    len = str3.size();
    cout << "str3.size() :  " << len << endl;
    return 0;
}