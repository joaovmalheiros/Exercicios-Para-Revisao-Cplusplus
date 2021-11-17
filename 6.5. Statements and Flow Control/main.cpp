#include <iostream>

using namespace std;

int main()
{

    //Jump statements

    //The break statement:
    /*break leaves a loop, even if the condition for its end is not fulfilled.
    It can be used to end an infinite loop, or to force it to end before its natural end.
    For example, let's stop the countdown before its natural end:
    */

    for(int n = 10; n > 0; n--)
    {
        cout << n << ", ";
        if(n == 3)
        {
            cout << "countdown aborted!";
            break;
        }
    }

    cout << '\n';

    //The continue statement:
    /*The continue statement causes the program to skip the rest of the loop
    in the current iteration, as if the end of the statement block had been
    reached, causing it to jump to the start of the following iteration.
    */

    for (int n = 10; n > 0; n--)
    {
        if(n == 5) continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";


    //The goto statement:
    /*
    goto allows to make an absolute jump to another point in the program.
    it is a feature to use with care, and preferably within the same
    block of statements, especially in the presence of local variables.

    The destination point is identified by a label, which is then used as an argument for the goto statement.

    goto is generally deemed a low-level feature, with no particular use cases in modern higher-level programming
    */

    int n=10;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";

    return 0;
}
