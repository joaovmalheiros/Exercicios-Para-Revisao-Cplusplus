#include <iostream>

using namespace std;

//Named entities, such as variables, functions, and compound types need to be declared before being used in C++.
//The point in the program where this declaration happens influences its visibility

int foo; //global variable

int some_function()
{
    int bar; //local variable
    bar = 0;
}

int other_function()
{
    foo = 1; //ok: foo is a global variable
    bar = 2; //wrong: bar is not visible from this function. The variable would need to be declared first.
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
