#include <iostream>
using namespace std;
const int SIZE = 10;

class safearay
{
private:
    int arr[SIZE];
public:
    safearay();
    int &operator[](int i);
};

safearay::safearay()
{
    int i;
    for (i = 0; i < SIZE; ++i)
    {
        arr[i] = i;
    }
}
int &safearay::operator[](int i)
{
    if (i > SIZE)
    {
        cout << "索引超过最大值" << endl;
        return arr[0];
    }
    return arr[i];
}

int main(int argc, char const *argv[])
{
    safearay A;
    cout << "A[2] 的值为 : " << A[2] << endl;
    cout << "A[5] 的值为 : " << A[5] << endl;
    cout << "A[12] 的值为 : " << A[12] << endl;

    return 0;
}