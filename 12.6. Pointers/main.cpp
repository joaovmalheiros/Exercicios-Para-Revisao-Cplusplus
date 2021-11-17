#include <iostream>

using namespace std;

//When adding one to a pointer, the pointer is made to point to the following element of the same type, and,
//therefore, the size in bytes of the type it points to is added to the pointer.

/*
Regarding the increment and decrement operators, they both can be used as either prefix or suffix off and expression,
with a slight difference in behavior. As a prefix, the increment happens before the expression is evaluated. This also applies
to expressions incrementing and decrementing pointers, which can become part of more complicated expressions that also include
dereference operators (*).

Essentially, these are the four possible combinations of the dereference operator with both the prefix and suffix versions
of the increment operator (the same being applicable also to the decrement operator):

*p++   // same as *(p++): increment pointer, and dereference unincremented address
*++p   // same as *(++p): increment pointer, and dereference incremented address
++*p   // same as ++(*p): dereference pointer, and increment the value it points to
(*p)++ // dereference pointer, and post-increment the value it points to

*/
int main()
{
    char mychar;
    short myshort;
    long mylong;

    char * myptr1 = &mychar;
    short * myptr2 = &myshort;
    long * myptr3 = &mylong;

    cout << "myptr1: " << myptr1 << "   myptr1 + 1: " << ++myptr1 << '\n';
    cout << "myptr2: " << myptr2 << "   myptr2 + 1: " << ++myptr2 << '\n';
    cout << "myptr3: " << myptr3 << "   myptr3 + 1: " << ++myptr3 << '\n';

    cout << endl;

    int myint = 10;
    int * myptr4 = &myint;

    cout << "myint: " << myint << "    myptr4: " << myptr4 << '\n';
    myptr4++;
    cout << "myint: " << myint << "    myptr4: " << myptr4 << '\n';
    *++myptr4;
    cout << "myint: " << myint << "    myptr4: " << myptr4 << '\n';
    ++*myptr4;
    cout << "myint: " << myint << "    myptr4: " << myptr4 << '\n';
    (*myptr4)++;
    cout << "myint: " << myint << "    myptr4: " << myptr4 << '\n';


    return 0;
}

//Like always, parentheses reduce confusion by adding legibility to expressions.

