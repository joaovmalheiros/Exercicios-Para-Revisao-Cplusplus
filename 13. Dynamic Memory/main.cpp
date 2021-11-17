#include <iostream>

using namespace std;

// there may be cases where the memory needs of a program can only be determined during runtime.
//For example, when the memory needed depends on user input. On these cases, programs need to dynamically allocate memory,
//for which the C++ language integrates the operators new and delete.

int main()
{
    int n;
    cout << "Enter the number of elements of your array: ";
    cin >> n;
    //Dynamic memory is allocated using operator new. new is followed by a data type specifier and, if a sequence of
    //more than one element is required, the number of these within brackets []. It returns a pointer to the beginning
    //of the new block of memory allocated. Its syntax is:

    int * foo;
    foo = new int [n];
    //In this case, the system dynamically allocates space for five elements of type int and returns a pointer to the first
    //element of the sequence, which is assigned to foo (a pointer).

    for(int i=0; i<n; i++)
    {
        cout << "Enter a integer value: ";
        cin >> *(foo + i);
    }

    for(int i=0; i<n; i++)
        cout << foo[i] << '\n'; //foo[i] == *(foo+i)

    /*
    There is a substantial difference between declaring a normal array and allocating dynamic memory for a block of memory
    using new. The most important difference is that the size of a regular array needs to be a constant expression, and
    thus its size has to be determined at the moment of designing the program, before it is run, whereas the dynamic memory
    allocation performed by new allows to assign memory during runtime using any variable value as size.
    */

    //C++ provides two standard mechanisms to check if the allocation was successful:



    return 0;
}
