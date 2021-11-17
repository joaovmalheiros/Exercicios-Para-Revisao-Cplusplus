#include <iostream>

using namespace std;

//Pointers to pointers:

/*
C++ allows the use of pointers that point to pointers, that these, in its turn, point to data (or even to other pointers).
The syntax simply requires an asterisk (*) for each level of indirection in the declaration of the pointer:
*/



int main()
{
    char a;
    char * b;
    char ** c;
    a = 'z';
    b = &a;
    c = &b;

    cout << "a: " << a << "    &a: " << &a << '\n';
    cout << "b: " << b << "    *b: " << *b << "    &b: " << &b << '\n';
    cout << "c: " << c << "    *c: " << *c << "    **c: " << **c << "    &c: " << &c << '\n';


    return 0;
}
