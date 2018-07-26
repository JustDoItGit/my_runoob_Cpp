#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{
	int area;

	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;
	return 0;
}