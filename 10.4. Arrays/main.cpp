#include <iostream>
#include <array>

using namespace std;

//Library Arrays
//To overcome some of these issues with language built-in arrays, C++ provides an alternative array type as a standard
//container. It is a type template (a class template, in fact) defined in header <array>.

//they operate in a similar way to built-in arrays, except that they allow being copied (an actually expensive operation
//that copies the entire block of memory, and thus to use with care) and decay into pointers only when explicitly told to
//do so (by means of its member data).

int main()
{
    array<int,3> myarray {10, 20, 30};

    //Notice how it is easy to access the size of the library array.
    for (int i=0; i<myarray.size(); ++i)
        ++myarray[i];

    for (int elem : myarray)
        cout << elem << '\n';
    return 0;
}
