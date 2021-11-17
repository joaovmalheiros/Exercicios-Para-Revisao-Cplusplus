#include <iostream>

using namespace std;

//Default values in parameters:
//In C++, functions can also have optional parameters, for which no arguments are required in the call.
//For this, a function shall include a default value for its last parameter.

int divide(int a, int b = 2)
{
    int r;
    r = a / b;
    return (r);
}

int main()
{
    cout << divide(12) << '\n';
    cout << divide(20, 4) << '\n';
    return 0;
}
