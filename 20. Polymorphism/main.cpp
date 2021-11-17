#include <iostream>

using namespace std;

//Pointers to base class:   one of the key features of class inheritance is that a pointer to a derived class is
//type-compatible with a pointer to its base class. Polymorphism is the art of taking advantage of this simple but powerful
//and versatile feature.

class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b){width = a; height = b;}
};

class Rectangle : public Polygon {
public:
    int area(){return width*height;}
};

class Triangle : public Polygon{
public:
    int area() {return width*height/2;}
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    //Such assignments are valid, since both Rectangle and Triangle are classes derived from Polygon:
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    //Because the type of both ppoly1 and ppoly2 is pointer to Polygon(and not to Rectangle nor Triangle), only members
    //inherited from Polygon can be accessed, and not those of the derived classes. That is why the program above accesses
    //the area members using rect and trgl direcly, instead of the pointers; the pointers to the base class cannot access
    //the area members.

    //Member area could have been accessed with the pointers to Polygon if area were a member of Polygon instead of a member
    //of its derived classes, but the problem is that Rectangle and Triangle implement different versions of area, therefore
    //there is not a single common version that could be implemented in the base class.
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}


