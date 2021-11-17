#include <iostream>

using namespace std;

//Pointers to classes: objects can also be pointed to by pointers: Once declared, a class becomes a valid type, so it
//can be used as the type pointed to by a pointer.
//Similarly as with plain data structures, the member of an object can be accessed directly from a pointer by using the
//arrow operator (->)

class Rectangle {
    int width, height;
public:
    Rectangle(int x, int y) : width(x), height(y) {}
    int area(void){ return width * height; }
};

int main()
{
    Rectangle obj(3, 4);
    Rectangle * foo, * bar, * baz;
    foo = &obj;
    bar = new Rectangle(5, 6);
    baz = new Rectangle[2] { {2, 5}, {3, 6} };
    cout << "obj's area: " << obj.area() << '\n';
    cout << "foo's area: " << foo->area() << '\n';
    cout << "bar's area: " << bar->area() << '\n';
    cout << "baz[0]'s area: " << baz[0].area() << '\n';
    cout << "baz[1]'s area: " << baz[1].area() << '\n';
    delete bar;
    delete[] baz;
    return 0;
}

//Classes can be defined not only with keyword class, but also with keywords struct and union
//The only difference between keyword class and keyword struct is that struct have public access by default,
//while members of classes define with class have private access by default. For all other purposes both keywords
//are equivalent in this context.

//Conversely, the concept of unions is different from the other two, since unions only store one data member at a time,
//but nevertheless they are also classes and can thus also hold member functions. The default access in union classes is public.
