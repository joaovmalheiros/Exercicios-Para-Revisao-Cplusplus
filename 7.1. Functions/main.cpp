#include <iostream>

using namespace std;

int addition(int a, int b)
{
    int r; //another local variable
    r = a + b;
    return r;//ends function addition and returns the control back to the point where the function was called
}

int subtraction(int a, int b)
{
    return (a - b);
}

//A C++ program always starts by calling main, the only function called automatically.
int main()
{
    int x = 5, y = 3, z;
    //At the moment of the function call, the value of both arguments (5 and 3) are copied to the local
    //variables int a and int b within the function.
    z = addition(5, 3);
    cout << "The result is " << z << endl;

    z = subtraction(7, 2);
    cout << "The first result of subtraction is " << z << '\n';
    cout << "The second result of subtraction is " << subtraction(9, 17) << '\n';
    cout << "The third result is " << subtraction(x, y) << '\n';
    z = 4 + subtraction(x, y);
    cout << "The fourth result is " << z << '\n';
    //note that the semicolon does not necessarily go after the function call, but at the end of the whole statement.

    z = addition(subtraction(5, 2), addition(1, 2));
    cout << "The fifth result is " << z << '\n';


    return 0;
}
