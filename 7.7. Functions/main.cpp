#include <iostream>

using namespace std;

//Declaring functions: functions cannot be called before they are declared.
//The prototype of a function can be declared without actually defining the function completely, giving just enough
//details to allow the types involved in a function call to be known.

void odd(int x); //prototype of function odd
void even(int x); //prototype of function even
//with these prototype declarations in place, they can be called before they are entirely defined.
//In some cases, such as in this particular case, at least one of the declarations is required, because odd and even
//are mutually called.

int main()
{

    int i;
    do{
        cout << "Please, enter number (0 to exit): ";
        cin >> i;
        odd(i);
    } while (i!=0);

    return 0;
}

void odd(int x)
{
    if((x%2) != 0)
    {
        cout << "It is odd.\n";
    }
    else
    {
        even(x);
    }
}

void even(int x)
{
    if(x%2 == 0)
    {
        cout << "It is even.\n";
    }
    else
    {
        odd(x);
    }
}
