#include <iostream>

using namespace std;

//Strings and null-terminated character sequences
//In the standard library, both representations for strings (C-strings and library strings) coexist, and most functions
//requiring strings are overloaded to support both.

//For example, cin and cout support null-terminated sequences directly, allowing them to be directly extracted from cin or
//inserted int cout, just like strings. For example:

int main()
{
    char question1[] = "What is your name? ";
    string question2 = "Where do you live?";
    char answer1[80];
    string answer2;
    cout << question1;
    cin >> answer1;
    cout << question2;
    cin >> answer2;
    cout << "Hello, " << answer1;
    cout << " from " << answer2 << "!\n";
    return 0;
}

//Null-terminated sequences and strings notable difference in their declarations: arrays have a fixed size that needs to
//be specified either implicit or explicitly when declared, while strings have a dynamic size determined during runtime,
//while the size of arrays is determined on compilations, before the program runs.
