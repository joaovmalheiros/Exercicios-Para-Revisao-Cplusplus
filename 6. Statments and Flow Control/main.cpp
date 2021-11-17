#include <iostream>

using namespace std;

/*
Selection statements - if and else:
The if keyword is used to execute a statement or block, if, and only if, a condition is fulfilled.

*/

int main()
{
    int x = 100;

    if (x == 100){
        cout << (x == 100) << endl; //True == 1
        cout << "x is 100" << endl;
    }
    else{
        cout << (x == 100) << endl; // False == 0
        cout << "x is not 100" << endl;
    }


    if (x > 0){
        cout << "x is positive";
    }
    else if (x < 0){
        cout << "x is negative";
    }
    else{
        cout << "x is 0";
    }

    return 0;
}
