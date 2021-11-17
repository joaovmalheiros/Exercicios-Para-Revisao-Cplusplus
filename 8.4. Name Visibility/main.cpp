#include <iostream>

using namespace std;

//Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving
//them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.

//The syntax to declare a namespace is:

/*
namespace identifier
{
    named_entities
}

*/

namespace myNamespace
{
    int a, b; //local variables declared within a namespace called myNamespace
}

int main()
{
    myNamespace::a = 2;
    myNamespace::b = 3;
    cout << "a: " << myNamespace::a << '\n' << "b: " << myNamespace::b << '\n';
    return 0;
}
