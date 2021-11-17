#include <iostream>

using namespace std;

//Invalid pointers and null pointers

//Pointers can actually point to any address, including addresses that do not refer to any valid element.
//Typical examples of this are uninitialized pointers and pointers to nonexistent elements of an array:

int main()
{
    int * p;               // uninitialized pointer (local variable)

    int myarray[10];
    int * q = myarray+20;  // element out of bounds

    //Neither p nor q point to addresses known to contain a value, but none of the above statements causes an error.
    //What can cause an error is to dereference such a pointer (i.e., actually accessing the value they point to).
    //Accessing such a pointer causes undefined behavior, ranging from an error during runtime to accessing some random value.

    //But, sometimes, a pointer really needs to explicitly point to nowhere, and not just an invalid address.
    //For such cases, there exists the null pointer value.This value can be expressed in C++ in two ways: either with an
    //integer value of zero, or with the nullptr keyword:

    int * j = 0;
    int * k = nullptr;
    //Here, both p and q are null pointers, meaning that they explicitly point to nowhere
    //It is also quite usual to see the defined constant NULL be used in older code to refer to the null pointer value:


    int * r = NULL;
    //NULL is defined in several headers of the standard library, and is defined as an alias of some null pointer
    //constant value (such as 0 or nullptr).

    //Do not confuse null pointers with void pointers!
    //ointer is a value that any pointer can take to represent that it is pointing to "nowhere", while a void pointer
    //is a type of pointer that can point to somewhere without a specific type. One refers to the value stored in the
    //pointer, and the other to the type of data it points to.


    return 0;
}
