#include <iostream>

using namespace std;

//Arguments passed by value and by reference

//Arguments passed by reference:
//To gain access to its arguments, the function declare its parameters as references (indicated with an ampersand)
//When a variable is passed by reference, what is passed is no longer a copy, but the variable itself.
//The variable identified by the function parameter becomes somehow associated with argument passed to the function, and
//any modification on their corresponding local variables within the function are reflected in the variables passed as
//arguments in the call.

void duplicate(int& a, int& b, int& c)
{
    a*=2;
    b*=2;
    c*=2;
}

int main()
{
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
    return 0;
}
