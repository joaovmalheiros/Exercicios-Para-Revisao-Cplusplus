#include <iostream>

using namespace std;

/*
C++ provides two standard mechanisms to check if the allocation was successful:

1- By handling exceptions.Using this method, an exception of type bad_alloc is thrown when the allocation fails.
If this exception is thrown and it is not handled by a specific handler, the program execution is terminated.

This exception method is the method used by default by new.

2- The other Method is known as nothrow, and what happens when it is used is that when a memory allocation fails, instead of
throwing a bad_alloc exception or terminating the program, the pointer returned by new is a null pointer, and the program
continues its execution normally.

*/

int main()
{
    int * foo = new int [5];//If allocation fails, an exception is thrown

    int * fii = new (nothrow) int [5]; // less efficient code than exceptions.
    //In this case, if the allocation of this block of memory fails, the failure can be detected by checking if foo is
    //a null pointer:

    if(fii == nullptr){
        //error assigning memory. Take measures.
    }

    return 0;
}
