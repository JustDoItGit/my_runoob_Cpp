#include <iostream>
using namespace std;

class Shape
{
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area();
};

/*Shape::Shape(int a = 0, int b = 0)
{
    width = a;
    height = b;
}*/
int Shape::area()
{
    cout << "Parent class area:" << endl;
    return 0;
}

class Rectabgle: public Shape
{
public:
    Rectabgle(int a = 0, int b = 0) : Shape(a, b) {};
    int area();
};

int Rectabgle::area()
{
    cout << "Rectabgle class area:" << endl;
    return width * height;
}

class Triangle: public Shape
{
public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {};
    int area();
};

int Triangle::area()
{
    cout << "Triangle class area:" << endl;
    return width * height;
}

int main(int argc, char const *argv[])
{
    Shape *shape;
    Rectabgle rec(10, 7);
    Triangle tri(10, 5);

    int area;
    shape = &rec;
    area = shape -> area();
    cout << "rec area = " << area << endl;

    shape = &tri;
    area = shape -> area();
    cout << "tri area = " << area << endl;

    rec.area();
    tri.area();
    return 0;
}