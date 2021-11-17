#include <iostream>

using namespace std;

int main()
{

    /*
    In C++, it is syntactically correct to exceed the valid range of indices for an array. This can create problems,
    since accessing out-of-range elements do not cause errors on compilation, but can cause errors on runtime. The
    reason for this being allowed will be seen in a later chapter when pointers are introduced.
    */

    //int foo[5];         // declaration of a new array
    //foo[2] = 75;        // access to an element of the array.

    /*
    Some other valid operations with arrays:
    foo[0] = a;
    foo[a] = 75;
    b = foo [a+2];
    foo[foo[a]] = foo[2] + 5;
    */

    int foo [] = {16, 2, 77, 40, 12071};
    int n, result=0;

    for ( n=0 ; n<5 ; ++n )
    {
        result += foo[n];
    }
    cout << result;

    return 0;
}
