#include <iostream>

using namespace std;

int main()
{
    //Another selection statement: switch

    int x;
    cin >> x;

    switch(x){
    case 1:
        cout << "x is 1" << endl;
        break;
    case 2:
        cout << "x is 2" << endl;
        break;
    default:
        cout << "value of x unknown" << endl;
    }

    //Comparing with if-else:
    if(x == 1){
        cout << "x is 1" << endl;
    }
    else if(x == 2){
        cout << "x is 2" << endl;
    }
    else{
        cout << "value of x unknown" << endl;
    }

    //Using switch without break: it can be useful to execute the same group of statements for different possible values
    switch(x){
    case 1:
    case 2:
    case 3:
        cout << "x is 1, 2 or 3" << endl;
        break;
    default:
        cout << "x is not 1, 2 nor 3" << endl;
    }

    //It is not possible to use variables as labels or ranges, because they are not valid C++ constant expressions.
    //To check for ranges or values that are not constant, it is better to use concatenations of if and else if statements.

    return 0;
}
