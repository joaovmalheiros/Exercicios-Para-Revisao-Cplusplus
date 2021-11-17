#include <iostream>

using namespace std;

//The variable that storoes the address of another variable is what in C++ is called a pointer.
//Pointers are a very powerful feature of the language that has many uses in lower level programming.
//Address-of operator (&): the address of a variable can be obtained by preceding the name of a variable with an ampersand sign (&)

int main()
{
    int myvar = 25;
    int* foo = &myvar; //the content of foo is the address of myvar
    int bar = myvar; //the content of bar is the content of myvar

    cout << "myvar: " << myvar << '\n';
    cout << "address of myvar: " << &myvar << '\n';
    cout << "foo: " << foo << '\n';
    cout << "address of foo: " << &foo << '\n';
    cout << "bar: " << bar << '\n';

    return 0;
}
