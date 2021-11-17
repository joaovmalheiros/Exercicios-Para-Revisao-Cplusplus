#include <iostream>

using namespace std;

//An inner block, because it is a different block, can re-utilize a name existing in an outer scope to refer
//to a different entity (only within the inner block)

int main()
{
    int x = 10;
    int y = 20;
    {
        int x; //ok, innter scope.
        x = 50; //sets value to inner x
        //note that y is not hidden in the inner block, and thus accessing y still accesses the outer variable
        y = 50; //sets value to (outer) y
        cout << "inner block:\n";
        cout << "x: " << x << '\n';
        cout << "y: " << y << '\n';
    }
    cout << "outer block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    return 0;
}

//Variables declared in declarations that introduce a block, such as function parameters and variables declared in
//loops and conditions (such as those declared on a for or an if) are local to the block they introduce.
