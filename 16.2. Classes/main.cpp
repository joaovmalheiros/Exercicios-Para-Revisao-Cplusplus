#include <iostream>

using namespace std;

//Overloading constructors:
//Like any other function, a constructor can also be overloaded with different versions taking different
//parameters: with a different number of parameters and/or parameters of different types.

class Rectangle {
    int width, height;
    public:
        Rectangle();
        Rectangle(int, int);
        int area(void){return (width*height);}
};

Rectangle::Rectangle(){
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int a, int b){
    width = a;
    height = b;
}

int main()
{
    Rectangle rect(3, 4);

    //Note how rectb is not even constructed with an empty set of parentheses - in fact, empty parentheses cannot
    //be used to call the default constructor:
    Rectangle rectb;

    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;

    return 0;
}
