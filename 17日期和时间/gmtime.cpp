#include <stdio.h>
#include <time.h>

#define BST (+1)
#define CCT (+8)

int main(int argc, char const *argv[])
{
    time_t rawtime;
    struct tm *info;

    time(&rawtime);
    /* 获取 GMT 时间 */
    info = gmtime(&rawtime);

    printf("当前的世界时钟：\n");
    printf("伦敦：%2d:%02d\n", (info->tm_hour + BST) % 24, info->tm_min);
    printf("中国：%2d:%02d\n", (info->tm_hour + CCT) % 24, info->tm_min);


    return 0;
}