#include <time.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	clock_t start_t, end_t;
	double total_t;
	int i;

	start_t = clock();
	printf("程序启动,start_t = %ld\n", start_t);

	printf("开始一个大循环, start_t = %ld\n", start_t);
	for (int i = 0; i < 10000000; ++i)
	{
		/* code */
	}
	end_t = clock();

	printf("大循环结束, end_t = %ld\n", end_t);
	return 0;
}