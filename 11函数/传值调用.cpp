#include <iostream>
using namespace std;

void swap(int x, int y);

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;

    cout << "交换前, a 的值: " << a << endl;
    cout << "交换前, b 的值: " << b << endl;

    swap(a, b);

    cout << "交换后, a 的值: " << a << endl;
    cout << "交换后, b 的值: " << b << endl;
    return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
	return;
}