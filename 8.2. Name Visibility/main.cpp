#include <iostream>

using namespace std;

//In each scope, a name can only represent one entity. For example, there cannot be two
//variables with the same name in the same scope:

int some_function()
{
    int x;
    x = 0;
    double x; // wrong: name already used in this scope
    x = 0.0;
}

int main()
{
    return 0;
}
