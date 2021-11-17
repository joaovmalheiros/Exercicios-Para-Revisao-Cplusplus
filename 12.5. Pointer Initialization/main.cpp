#include <iostream>

using namespace std;

//Pointer initialization

int main()
{
    //Pointers can be initialized to point to specific locations at the very moment they are defined:
    int myvar = 10;
    int * myptr = &myvar;

    cout << "&myvar: " << &myvar << '\n';
    cout << "myptr: " << myptr << '\n';

    //When pointers are initialized, what is initialized is the address they point to(i.e., myptr), never
    //the value being pointed(i.e.m *myptr).

    //The asterisk (*) in the pointer declaration (line 2) only indicates that it is a pointer.

    //Pointers can be initialized either to the address of a variable(such as in the case above), or to the value of another pointer
    //(or array):

    int *foo = &myvar;
    int *bar = foo;

    cout << "foo: " << foo << '\n';
    cout << "bar: " << bar << '\n';

    return 0;
}
