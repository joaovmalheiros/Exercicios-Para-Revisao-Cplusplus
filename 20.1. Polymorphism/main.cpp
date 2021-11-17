#include <iostream>

using namespace std;

//Virtual member: is a member function that can be redefined in a derived class, while preserving its calling properties
//trough references. The syntax for a function to become virtual is to precede its declaration with the virtual keyword:

class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b){width = a; height = b;}
    virtual int area(){return 0;}
};

class Rectangle : public Polygon{
public:
    int area(){return width * height;}
};

class Triangle : public Polygon {
public:
    int area(){width * height / 2;}
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    Polygon * ppoly3 = &poly;
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    cout << ppoly3->area() << '\n';
    return 0;
}

//Non-virtual members can also be redefined in derived classes, but non-virtual members of derived classes cannot
//be accessed through a reference of the base class. If virtual is removed from the declaration area, all three
//calls to area would return zero, because in all cases, the version of the base class would have been called instead.

//What the virtual keyword does is to allow a member of derived class with the same name as one in the base class to
//be appropriately called from a pointer, and more precisely, when the type of the pointer is a pointer to the base
//class that is pointing to an object of the derive class.

//A class that declares or inherits a virtual function is called a polymorphic class.
