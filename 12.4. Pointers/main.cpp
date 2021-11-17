#include <iostream>

using namespace std;

//Pointers and arrays: the concept of arrays is related to that of pointers. In fact, arrays work very much like
//pointers to their first elements, and, actually, an array can always be implicitly converted to the pointer of the
//proper type.

int main()
{
    int numbers[5];
    int * p;
    p = numbers; *p = 10;
    p++; *p = 20;
    p = &numbers[2]; *p =30;
    p = numbers + 3; *p = 40;
    p = numbers; *(p+4) = 50;

    for(int n=0; n<5; n++)
        cout << numbers[n] << ", ";

    cout << '\n';

    int a[5] = {2, 3, 7, -1, 19};

    for(int i=0; i<5; i++)
        cout << *(a+i) << '\n';

    return 0;
}

//Pointers and arrays support the same set of operations, with the same meaning for both. The main difference being that
//pointers can be assigned new addresses, while arrays cannot.

//Brackets ([]) are a dereferencing operator known as offset operator. They dereference the variable they follow just as
//* does, but they also add the number between brackets to the address being dereferenced. For example:
//a[5] = 0    ==     *(a+5) = 0
