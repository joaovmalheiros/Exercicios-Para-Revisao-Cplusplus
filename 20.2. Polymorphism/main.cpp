#include <iostream>

using namespace std;

//Abstract base classes: can only be used as base classes, and thus are allowed to have virtual member functions without
//definition (known as pure virtual functions). The syntax is to replace their definition by = 0

//Classes that contain at least one pure virtual function are known as abstract base classes.

//Abstract base classes cannot be used to instantiate objects.

//But it can be used to create pointers to it, and take advantage of all its polymorphic abilities.

class Polygon {
protected:
    int width, height;
public:
    void set_values (int a, int b){width = a; height = b;}
    virtual int area (void) = 0;
    void printarea(){cout << this->area() << '\n';}
};

class Rectangle : public Polygon {
public:
    int area(void) {return (width * height);}
};

class Triangle : public Polygon {
public:
    int area(void){return (width*height)/2;}
};


int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    ppoly1->set_values(4,5);
    ppoly2->set_values(4,5);
    ppoly1->printarea();
    ppoly2->printarea();
    return 0;
}

//In this example, objects of different but related types are referred to using a unique type of pointer (Polygon*)
//and the proper member function is called every time, just because they are virtual. This can be really useful in
//some circumstances. For example, it is even possible for a member of the abstract base class Polygon to use the special
//pointer this to access the proper virtual members, even though Polygon itself has no implementation for this function.
