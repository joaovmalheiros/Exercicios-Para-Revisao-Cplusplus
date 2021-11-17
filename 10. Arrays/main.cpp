#include <iostream>

using namespace std;

//Initializing arrays

int main()
{
    //An array is a series of elements of the same type placed in contiguous memory locations that can
    //be individually referenced by adding an index to a unique identifier.

    //In C++, the first element in an array is always numbered with a zero (not a one), no matter its length.

    //The elements field within square brackets [], representing the number of elements in the array, must be
    //a constant expression, since arrays are blocks of static memory whose size must be determined at compile
    //time, before the program runs.


    int foo [5] = { 16, 2, 77, 40, 12071};

    //. If declared with less, the remaining elements are set to their default values (which for fundamental
    //types, means they are filled with zeros):
    int bar [5] = { 10, 20, 30 };

    int baz [5] = { }; //This creates an array of five int values, each initialized with a value of zero:

    int fii [] = { 16, 2, 77, 40, 12071 };//After this declaration, array foo would be 5 int long,
    //since we have provided 5 initialization values.

    /*
    Both these statements are equivalente:
    int foo[] = { 10, 20, 30 };
    int foo[] { 10, 20, 30 };
    */

    //Static arrays, and those declared directly in a namespace (outside any function), are always
    //initialized. If no explicit initializer is specified, all the elements are default-initialized
    //(with zeroes, for fundamental types).

    for(int i = 0; i < 5; i++)
    {
        cout << "i: " << i << "\tfii[" << i << "]: " << fii[i] << "\t";
    }


    return 0;
}
