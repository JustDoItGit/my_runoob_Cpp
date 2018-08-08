#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    // 基于当前系统的当前日期/时间
    time_t now = time(NULL);
    // 把 now 转换为字符串形式
    char *dt = ctime(&now);

    cout << "本地日期和时间: " << dt;


    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);

    dt = asctime(gmtm);

    cout << "UTC 日期和时间: " << dt;
    return 0;
}