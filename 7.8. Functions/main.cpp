#include <iostream>

using namespace std;

//Recursivity: is the property that functions have to be called by themselves.

long factorial(long a)
{
    if (a > 1)
        return (a * factorial(a-1));
    else return 1;
}

int main()
{
    long number = 5;
    cout << number << "! = " << factorial(number);
    return 0;
}
