#include <iostream>
#include <string>

using namespace std;

//Iteration statements (loops)


int main()
{
    //The do-while loop:

    /*
    It behaves like a while-loop, except that condition is evaluated after the execution of statement
    instead of before, guaranteeing at least one execution of statement, even if condition is never fulfilled.


    The do-while loop is usually preferred over a while-loop when the statement needs to be executed
    at least once, such as when the condition that is checked to end of the loop is determined within
    the loop statement itself.

    */

    string str;

    do {
       cout << "Enter text: ";
       getline(cin, str);
       cout << "You entered: " << str << '\n';
    } while (str != "goodbye");


    return 0;
}
