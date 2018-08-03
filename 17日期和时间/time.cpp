#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    time_t seconds;

    seconds = time(NULL);

    printf("自 1970-01-01 起的小时数 = %ld\n", seconds / 3600);
    return 0;
}