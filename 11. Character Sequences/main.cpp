#include <iostream>

using namespace std;

int main()
{
    //because strings are, in fact, sequences of characters, we can represent them also as plain arrays of
    //elements of a character type.

    char foo [20]; // is an array that can store up to 20 elements of type char.

    //By convention, the end of strings represented in character sequences is signaled by a special character:
    //the null character, whose literal value can be written as '\0' (backslash, zero).


    char myword1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    char myword2[] = "Hello";

    //In both cases, the array of characters myword is declared with a size of 6 elements of type char:

    //Sequences of characters enclosed in double-quotes (") are literal constants. And their type is, in fact,
    //a null-terminated array of characters. This means that string literals always have a null character ('\0')
    //automatically appended at the end.

    //Because string literals are regular arrays, they have the same restrictions as these, and cannot be assigned values.
    //arrays cannot be assigned values. Note, though, that each of its elements can be assigned a value individually.

    char myword[] = "Hello";

    myword[0] = 'B';
    myword[1] = 'y';
    myword[2] = 'e';
    myword[3] = '\0';

    for(int i=0; i < 3; i++)
        cout << myword[i];
    cout << '\n';

    return 0;
}
