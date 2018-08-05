#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    struct tm *t;
    time_t rawtime;

    time(&rawtime);

    t = localtime(&rawtime);
    
    puts(asctime(t));
    puts(ctime(&rawtime));

    struct tm t1;
    t1.tm_sec    = 10;
    t1.tm_min    = 10;
    t1.tm_hour   = 6;
    t1.tm_mday   = 25;
    t1.tm_mon    = 2;
    t1.tm_year   = 89;
    t1.tm_wday   = 6;

    puts(asctime(&t1));
    return 0;
}