#include <iostream>

using namespace std;

//Dereference operator (*)
//An interesting property of pointers is that they can be used to access the variable they point to directly. This is done
//by preceding the pointer name with the dereference operator (*). The operator itself can be read as "value pointed to by"

int main()
{
    int myvar = 25;
    int* foo = &myvar; //the content of foo is the address of myvar
    int bar = myvar; //the content of bar is the content of myvar
    int baz = *foo;

    cout << "myvar: " << myvar << '\n';
    cout << "baz(*foo): " << baz << '\n';

    return 0;
}

//& is the address-of operator, and can be read simply as "address of"
//* is the dereference operator, and can be read as "value pointed to by"
