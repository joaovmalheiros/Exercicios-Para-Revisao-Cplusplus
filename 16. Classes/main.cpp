#include <iostream>

using namespace std;

class Rectangle {
        int width, height;//any member that is declared before any other access specifier has private access automatically.
    public:
        void set_values(int,int);
        int area (void);
};

//private members of a class are accessible only from within other members of the same class (or from their "friends").

//protected members are accessible from other members of the same class (or from their "friends"), but also from
//members of their derived classes.

//public members are accessible from anywhere where the object is visible.

//This example reintroduces the scope operator (::, two colons.
//Here it is used in the definition of function set_values to define a member of a class outside the class itself.
//The scope operator (::) specifies the class to which the member being defined belongs
void Rectangle::set_values(int x, int y){
    width = x;
    height = y;
}

int Rectangle::area(void){
    return (width * height);
}

int main()
{
    //Classes are an expanded concept of data structures: like data structures, they can contain data
    //members, but they can also contain functions as members.


    //An object is an instantiation of a class. In terms of variables, a class would be the type, and an
    //object would be the variable.

    Rectangle rect, rectb;
    rect.set_values (3, 4);
    rectb.set_values(5, 6);

    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;

    return 0;
}

/*
Classes allow programming using object-oriented paradigms: Data and functions are both members of the object, reducing
the need to pass and carry handlers or other state variables as arguments to functions, because they are part of the object
whose member is called. Notice that no arguments were passed on the calls to rect.area or rectb.area. Those member functions
directly used the data members of their respective objects rect and rectb.
*/
