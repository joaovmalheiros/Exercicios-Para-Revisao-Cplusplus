#include <iostream>

using namespace std;

//Pointers and String Literals:
//string literals are arrays containing null-terminated character sequences.

/*
they can also be accessed directly. String literals are arrays of the proper array type to contain all its characters
plus the terminating null-character, with each of the elements being of type const char (as literals, they can never be modified).
*/

int main()
{
    //This declares an array with the literal representation for "hello", and then a pointer to its first element
    //is assigned to foo.
    const char * foo = "hello";

    //The pointer foo points to a sequence of characters. And because pointers and arrays behave essentially in the
    //same way in expressions, foo can be used to access the characters in the same way arrays of null-terminated
    //character sequences are. For example: *(foo+4)  ,   foo[4]
    //Both expressions have a value of 'o' (the fifth element of the array).

    cout << "foo[4]: " << foo[4] << '\n';
    cout << "*(foo+4): " << *(foo+4) << '\n';



    return 0;
}
