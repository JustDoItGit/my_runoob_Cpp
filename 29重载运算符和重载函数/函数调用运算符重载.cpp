#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance();
    Distance(int f, int i);
    Distance operator()(int a, int b, int c);
    void displayDistance();
};
Distance::Distance()
{
    feet = 0;
    inches = 0;
}
Distance::Distance(int f, int i)
{
    feet = f;
    inches = i;
}
void Distance::displayDistance()
{
    cout << "F: " << feet <<  " I:" <<  inches << endl;
}
Distance Distance::operator()(int a, int b, int c)
{
    Distance D;
    D.feet = a + c + 10;
    D.inches = b + c + 100;
    return D;
}

int main(int argc, char const *argv[])
{
    Distance D1(11, 10), D2;

    cout << "First Distance : ";
    D1.displayDistance();

    D2 = D1(10, 10, 10);
    cout << "Second Distance : ";
    D2.displayDistance();

    return 0;
}