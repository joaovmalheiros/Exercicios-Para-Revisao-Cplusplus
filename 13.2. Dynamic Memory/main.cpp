#include <iostream>
#include <new>

using namespace std;

//Operators delete and delete
//Once it is no longer needed, the memory can be freed so that it becomes available again for other requests of dynamic memory.

/*
delete pointer; -->releases the memory of a single element allocated using new

delete[] pointer; --> releases the memory allocated for arrays of elements

*/

int main()
{
    int i, n;
    int * p;

    cout << "How many numbers would you like to type? ";
    cin >> i;

    p = new (nothrow) int[i];
    if(p == nullptr)
    {
        cout << "Error: memory could no be allocated!"; // Verificar pq não funciona!!!
    }
    else
    {
        for(n=0; n<i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for(n=0;n<i;n++)
            cout << p[n] << ", ";
        delete [] p;
    }

    return 0;
}
