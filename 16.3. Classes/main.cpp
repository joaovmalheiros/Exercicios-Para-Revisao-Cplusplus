#include <iostream>

using namespace std;

//Uniform initialization:
//The way of calling constructors by enclosing their arguments in parentheses, as shown above, is known as
//functional form. But constructors can also be called with other syntaxes:

class Circle {
    double radius;
  public:
    Circle(double r) { radius = r; }
    double circum() {return 2*radius*3.14159265;}
};



int main()
{
    Circle foo (10.0);   // functional form
    Circle bar = 20.0;   // assignment init.
    Circle baz {30.0};   // uniform init.
    Circle qux = {40.0}; // POD-like

    cout << "foo's circumference: " << foo.circum() << '\n';

    return 0;
}

//An advantage of uniform initialization over functional form is that, unlike parentheses, braces cannot
//be confused with function declarations, and thus can be used to explicitly call default constructors:

/*
Rectangle rectb;   // default constructor called
Rectangle rectc(); // function declaration (default constructor NOT called)
Rectangle rectd{}; // default constructor called
*/
