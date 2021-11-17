#include <iostream>

using namespace std;

//Constants are expressions with a fixed value
//Literals: can be classified into integer, floating-point, characters, strings, boolean, pointers and user defined literals

int main()
{
    int a = 5; //The 5 in this piece of code is a literal constant
    cout << 75 << endl;     // decimal
    cout << 0113 << endl;   // octal - digits are preceded with a 0
    cout << 0x4b << endl << endl;   // hexadecimal - digits are preceded by characters 0x

    cout << 75 << endl;     //int
    cout << 75u << endl;    //unsigned int
    cout << 75l << endl;    //long
    cout << 75ul << endl;   //unsigned long
    cout << 75lu <<endl;    //unsigned long
    //in all the cases above, the suffix can be specified using either upper or lowercase letters

    cout << 3.14159 << endl;
    cout << 6.02e23 << endl;
    cout << 1.6e-19 << endl;
    cout << 3.0 << endl << endl;
    //The default type for floating-point literals is double. Floating point literals of type float or long double can be
    //specified by adding one of the following suffixes:
    cout << 3.14159L << endl;   //long double
    cout << 6.02e23f << endl;   //float

    //Character and string literals are enclosed in quotes:
    cout << 'z' << endl;
    cout << 'p' << endl;
    cout << "Hello World" << endl;
    cout << "How do you do?" << endl;

    /*
    Character and string literals can also represent special characters that are difficult or impossible to express
    otherwise in the source code of a program, like newline(\n) or tab(\t). Here is a list:

    \n - newline
    \r - carriage return
    \t - tab
    \v - vertical tab
    \b - backspace
    \f - form feed (page feed)
    \a - alert (beep)
    \' - single quote(')
    \'' - double quote('')
    \? - question mark (?)
    \\ - backslash(\)

    */

    cout << '\n';
    cout << "Left \t Right\n";
    cout << "one\ntwo\nthree\n";

    //Internally, computers represent characters as numerical codes: most typically, they use one extension of the ASCII
    //character encoding system:
    cout << '\x25' << endl;
    cout << '\x4a' << endl;

    //In C++, a backslash (\) at the end of line is considered a line-continuation character that merges both that line
    //and the next into a single line.
    string x = "string expressed in \
    two lines"; //pq fica o espaço??
    cout << x << endl;


    return 0;
}
