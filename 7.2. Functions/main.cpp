#include <iostream>

using namespace std;

//Functions with no type. The use of void:
//Used when the function does not need to return a value.

void printmessage()
{
    cout << "I'm a function!" << '\n';
}

//void can also be used in the function's parameter list to explicity specify that the function takes no
//actual parameters when called:
void printmessage2(void)
{
    cout << "I'm also a function!" << '\n';
}

int main()
{
    printmessage();
    printmessage2();
    return 0;
}
