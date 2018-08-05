#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t rawtime;
	struct tm *info;

	char buffer[80];

	time(&rawtime);

	info = localtime(&rawtime);

	strftime(buffer,80,"%x - %I:%M%p", info);
	printf("格式化的日期 & 时间 : |%s|\n", buffer);
	return 0;
}