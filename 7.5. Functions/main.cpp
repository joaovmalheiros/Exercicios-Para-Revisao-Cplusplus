#include <iostream>

using namespace std;

//Inline Functions: calling a function generally causes a certain overhead, and thus for very short functions, it may be more
//efficient to simply insert the code of the function where it is called, instead of performing the process of formally
//calling a function.

//This informs the compiler that when concatenate is called, the program prefers the function to be called inline,
//instead of performing a regular call.
inline string concatenate(const string& a, const string& b)
{
    return a + b;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
