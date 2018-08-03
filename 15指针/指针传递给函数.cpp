#include <iostream>
#include <ctime>

using namespace std;

void getSeconds(unsigned long *par);

int main(int argc, char const *argv[])
{
    unsigned long sec;
    getSeconds(&sec);

    cout << "Number of seconds : " << sec << endl;
    return 0;
}

void getSeconds(unsigned long *par)
{
    *par = time(NULL);
    return;
}