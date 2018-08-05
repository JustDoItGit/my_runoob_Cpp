#include <stdio.h>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main(int argc, char const *argv[])
{
	time_t start_t, end_t;

	double diff_t;

	printf("启动程序...\n");
	time(&start_t);
	printf("休眠 5 秒...\n");
	sleep(5);

	time(&end_t);

	diff_t = difftime(end_t, start_t);

	printf("执行时间 = %f\n", diff_t);
	printf("程序退出...\n");
	return 0;
}