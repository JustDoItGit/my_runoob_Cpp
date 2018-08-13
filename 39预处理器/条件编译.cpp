#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a, b) (a < b ? a : b)

int main(int argc, char const *argv[])
{
    int i, j;
    i = 100;
    j = 30;

#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl;
#endif

#if 0
    cout << MKSTR(HELLO C++) << endl;
#endif

    cout << "The minimum is " << MIN(i, j) << endl;

#ifdef MIN
    cerr << "The MIN is defined." << endl;
#endif

#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif
    return 0;
}