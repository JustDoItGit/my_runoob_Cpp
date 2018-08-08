#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    time_t now = time(0);

    cout << "1970年 到目前经过秒数: " << now << endl;

    tm *ltm = localtime(&now);

    cout << "年: " << 1990 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;

    char tmp[64];   
    strftime(tmp,sizeof(tmp),"%Y-%m-%d %H:%M:%S",localtime(&now));
    printf("%s\n", tmp);
    return 0;
}