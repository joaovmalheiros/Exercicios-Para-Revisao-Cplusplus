#include <iostream>

using namespace std;

//Pointers and Constant 2:
//Pointers can also be themselves const. And this is specified by appending const to the pointed type (after the asterisk):

int main()
{
    int x;
          int *       p1 = &x;  // non-const pointer to non-const int
    const int *       p2 = &x;  // non-const pointer to const int
          int * const p3 = &x;  // const pointer to non-const int
    const int * const p4 = &x;  // const pointer to const int
    return 0;
}
