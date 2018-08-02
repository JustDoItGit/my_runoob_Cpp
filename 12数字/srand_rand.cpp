#include <iostream>
#include <stdio.h>
#include <time.h>
#define MAX 10

int main(int argc, char const *argv[])
{
    int number[MAX] = {0};
    int i;
    srand((unsigned)time(NULL));
    for (i = 0; i < MAX; ++i)
    {
        number[i] = rand() % 100;
        printf("%d\n", number[i]);
    }
    return 0;
}