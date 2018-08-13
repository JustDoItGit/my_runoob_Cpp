#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int singnum)
{
    cout << "\nInterrupt signal (" << singnum << ") received.\n";
    // 清理并关闭
    // 终止程序
    exit(singnum);
}

int main(int argc, char const *argv[])
{
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);

    while(1)
    {
        cout << "Going to sleep...." << endl;
        sleep(1);
    }
    return 0;
}