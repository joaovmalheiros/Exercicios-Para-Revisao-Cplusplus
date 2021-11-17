#include <iostream>

using namespace std;

//To accept an array as parameter for a function, the parameters can be declared as the array type,
//but with empty brackets, omitting the actual size of the array.

/*
void printarray (int arg[], int length) {
    for (int n=0; n < length; ++n)
        cout << arg[n] << ' ';
    cout << '\n';
}
*/

template <class T>
void printarray (T arg[], int length){
    for(int n=0; n < length; n++)
        cout << arg[n] << ' ';
    cout << '\n';
}

/*
In the code above, the first parameter (int arg[]) accepts any array whose elements are of type int, whatever its length.
For that reason, we have included a second parameter that tells the function the length of each array that we pass
to it as its first parameter.
*/

/*
In a function declaration, it is also possible to include multidimensional arrays. The format for a
tridimensional array parameter is:

base_type[][depth][depth]
void procedure (int myarray[][3][4])

Notice that the first brackets [] are left empty, while the following ones specify sizes for their respective
dimensions. This is necessary in order for the compiler to be able to determine the depth of each additional dimension.
*/

int main()
{
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    double thirdarray[] = {17.9, 4.7, 2.1};
    string fourtharray[] = {"Batata", "Cenoura", "Tomate"};
    printarray (firstarray,3);
    printarray (secondarray,5);
    printarray (thirdarray, 3);
    printarray (fourtharray, 3);
    return 0;
}
