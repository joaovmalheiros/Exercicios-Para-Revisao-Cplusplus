#include <iostream>

using namespace std;

//In any case, null-terminated character sequences and strings are easily transformed from one another:

int main()
{
    char myntcs[] = "some text";
    string mystring = myntcs; //convert c-string to string
    cout << mystring << '\n'; //printed as a library string
    cout << mystring.c_str(); //printed as a c-string
    return 0;
}
