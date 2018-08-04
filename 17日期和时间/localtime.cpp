#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t rawtime;
    struct tm *info;

    time(&rawtime);

    info = localtime(&rawtime);

    printf("当前的本地时间和日期: %s\n", asctime(info));

    //格式化输出本地时间
    printf("年：%d\n", info->tm_year + 1900);
    printf("月：%d\n", info->tm_mon + 1);
    printf("日：%d\n", info->tm_mday);
    printf("星期：%d\n", info->tm_wday);
    printf("一年中：%d\n", info->tm_yday);
    printf("时：%d\n", info->tm_hour);
    printf("分：%d\n", info->tm_min);
    printf("秒：%d\n", info->tm_sec);
    printf("夏令时：%d\n", info->tm_isdst);
    return 0;
}