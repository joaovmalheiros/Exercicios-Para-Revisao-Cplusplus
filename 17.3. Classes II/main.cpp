#include <iostream>

using namespace std;

//Static Members: a class can contain static members, either data or functions

//A static data member of a class is also known as a "class variable", because there is only one common variable for
//all the objects of that same class, sharing the same value.

//For example, it may be used for a variable within a class that contain a counter with the number of objects of
//that class that are currently allocated, as in the following example:

class Dummy {
public:
    static int n;
    Dummy() { n++;}
};

//In fact, static members have the same properties as non-member variables but they enjoy class scope. For that reason,
//and to avoid them to be declared several times, they cannot  be initialized directly in the class, but need to be
//initialized somewhere outside it:
int Dummy::n = 0;

int main()
{
    Dummy a;
    Dummy b[5];
    cout << a.n << '\n';
    Dummy * c = new Dummy;
    cout << Dummy::n << '\n';
    delete c;
    return 0;
}

//Because it is a common variable value for all objects of the same class, it can be referred to as a member of
//any object of that class or even directly bye the class name.

//Classes can also have static member functions. These represent the same: members of a class that are common to
//all object of that class, acting exactly as non-member functions but being accessed like members of the class.
//Because they are like non-member functions, they cannot access non-static members of the class (neither member variables
//nor member functions). They neither can use keyword this.
