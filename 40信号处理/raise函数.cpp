#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") receeived.\n";

    // 清理并关闭
    // 终止程序
    exit(signum);
}

int main(int argc, char const *argv[])
{
    int i = 0;
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);

    while(++i)
    {
        cout << "Going to sleep...." << endl;
        if (i == 3)
        {
            raise(SIGINT);
        }
        sleep(1);
    }
    return 0;
}