#include <iostream>

using namespace std;

//Overloaded functions

//In C++, two different functions can have the same name if their parameters are different; either because they have
//a different number of parameters, or because any of their parameters are of a different type.

int operate(int a, int b)
{
    return (a*b);
}

double operate(double a, double b)
{
    return(a/b);
}

//Both functions have quite different behaviors. This is generally not a good idea. Two functions with the same name
//are generally expected to have -at least- a similar behavior.

//Note that a function cannot be overloaded only by its return type. At least one of its parameters must have a different
//type.

int main()
{
    int x = 5, y = 2;
    double n = 5.0, m = 2.0;

    //The compiler knows which one to call in each case by examining the types passed as arguments when
    //the function is called:
    cout << operate(x, y) << '\n';
    cout << operate(n, m) << '\n';

    return 0;
}
