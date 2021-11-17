#include <iostream>

using namespace std;

//Iteration statements (loops)

int main()
{
    //The while loop:

    /*
    The while-loop simply repeats statement while expression is true.
    If, after any execution of statement, expression is no longer true,
    the loop ends, and the program continues right after the loop
    */

    int n = 10;

    while (n > 0){
        cout << n << ", ";
        --n;
    }

    cout << "liftoff!\n";

    return 0;
}
