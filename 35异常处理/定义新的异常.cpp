#include <iostream>
#include <exception>

using namespace std;

struct MyException : public exception
{
    const char *what() const throw()
    {
        return "C++ Exception";
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        throw MyException();
    }
    catch(MyException &e)
    {
        cout << "MyException caugth" << endl;
        cout << e.what() << endl;
    }
    catch(exception &e)
    {
        cout << "e.what()" << endl;
    }
    return 0;
}