#include <iostream>

using namespace std;

/*
What is inherited from the base class? In principle, a publicly derived class inherits access to every member of a base
class except:

-Its constructors and its destructor (But they are automatically called by the constructors and destructor of derived class)
-Its assignment operator members (operator=)
-Its friends
-Its private members

*/

//Unless otherwise specified, the constructors of a derived class calls the default constructor of its base classes (i.e.,
//the constructor taking no arguments)

//Calling a different constructor of a base class is possible, using the same syntax used to initialize member variables
//in the initialization list:
// derived_constructor_name (parameters) : base_constructor_name (parameters) {...}


class Mother {
public:
    Mother() {cout << "Mother: no parameters\n";}
    Mother(int a) {cout << "Mother: int parameter\n";}
};

class Daughter : public Mother {
public:
    Daughter(int a) {cout << "Daugther: int parameter\n\n";}
};

class Son : public Mother {
public:
    Son(int a) : Mother(a) {cout << "Son: int parameter\n\n";}
};

int main()
{
    Daughter kelly(0);
    Son bud(0);

    return 0;
}
