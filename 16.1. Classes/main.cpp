#include <iostream>

using namespace std;

//Constructors:
//a class can include a special function called its constructor, which is automatically called whenever a new object
//of this class is created, allowing the class to initialize member variables or allocate storage.

class Rectangle {
    int width, height;
    public:
        Rectangle (int, int);
        int area() {return (width*height);}
};

//The constructor initializes the values of width and height with the arguments passed to it.
//Constructors are only executed once, when a new object of that class is created.
//Constructors never return values, they simply initialize the object.
Rectangle::Rectangle (int a, int b){
    width = a;
    height = b;
}

int main()
{
    Rectangle rect (3, 4);
    Rectangle rectb(5, 6);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}
