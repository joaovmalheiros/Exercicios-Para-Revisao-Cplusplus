#include <iostream>

using namespace std;

//Member initialization in constructors

class Rectangle {
    int width,height;
  public:
    Rectangle(int,int);
    int area() {return width*height;}
};

class Circle {
    double radius;
  public:
    Circle(double r) : radius(r) { }
    double area() {return radius*radius*3.14159265;}
};


//In this example, class Cylinder has a member object whose type is another class (base's type is Circle).
//Because objects of class Circle can only be constructed with a parameter, Cylinder's constructor needs to call base's
//constructor, and the only way to do this is in the member initializer list.
class Cylinder {
    Circle base;
    double height;
  public:
    Cylinder(double r, double h) : base (r), height(h) {}
    double volume() {return base.area() * height;}
};

//The constructor could also be defined using member initialization as:
//Note how in this last case, the constructor does nothing else than initialize its members,
//hence it has an empty function body.
Rectangle::Rectangle (int x, int y) : width(x), height(y) {}

int main()
{
    Cylinder foo (10,20);

    cout << "foo's volume: " << foo.volume() << '\n';

    return 0;
}
