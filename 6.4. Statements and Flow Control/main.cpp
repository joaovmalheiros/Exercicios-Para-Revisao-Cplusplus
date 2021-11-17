#include <iostream>

using namespace std;

int main()
{
    //The for loop

    /*
    Like the while-loop, this loop repeats statement while condition is true.
    But, in addition, the for loop provides specific locations to contain an initialization
    and an increase expression, executed before the loop begins the first time, and after each iteration, respectively.
    Therefore, it is especially useful to use counter variables as condition.
    */

    for(int n = 10; n > 0; n--){
        cout << n << ", ";
    }

    cout << "liftoff!\n" << endl;


    //it would be possible for a for loop to handle two counter variables, initializing and increasing both:
    for(int x = 0, i = 100; x != i; ++x, --i)
    {
        cout << "x: " << x << "\t i: " << i << endl;
    }


    //Range-based for loop

    /*
    The for-loop has another syntax, which is used exclusively with ranges:

    for ( declaration : range ) statement;

    Note how what precedes the colon (:) in the for loop is the declaration of a char variable
    (the elements in a string are of type char). We then use this variable, c, in the statement
    block to represent the value of each of the elements in the range.

    Range based loops usually also make use of type deduction for the type of the elements with auto.
    */
    string str {"Hello!"};

    for(char c: str)
    {
        cout << "[" << c << "]";
    }
    cout << '\n';


    return 0;
}
