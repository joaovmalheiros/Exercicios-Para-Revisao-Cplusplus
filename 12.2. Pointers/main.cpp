#include <iostream>

using namespace std;

//Declaring Pointers
//Once dereferenced, the type needs to be known. And for that, the declaration of a pointer needs to include the data type
//the pointer is going to point to.
//This is not the type of the pointer itself, but the type of the data the pointer points to.

int main()
{
    //These are declarations of pointers.
    //All of them are pointers and all of them are likely going to occupy the same amount of space in memory
    //Note that the asterkis (*) used when declaring a pointer only means that it is a pointer
    int* number;
    char* character;
    double* decimals;


    int firstValue, secondValue;
    int* mypointer;

    mypointer = &firstValue;
    *mypointer = 10;
    mypointer = &secondValue;
    *mypointer = 20;

    cout << "firstValue is: " << firstValue << '\n';
    cout << "secondValue is: " << secondValue << '\n';

    return 0;
}
