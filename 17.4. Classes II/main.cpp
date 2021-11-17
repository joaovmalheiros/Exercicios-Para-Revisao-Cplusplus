#include <iostream>

using namespace std;

//Const Member Functions:
//When an object of a class is qualified as a const object, the access to its data members from outside the class is
//restricted to read-only.
//Note though, that the constructor is still called and is allowed to initialize and modify these data members:

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}
    int get() {return x;}
    int get() const {return x;}
};

int main()
{
    const MyClass foo(10);
    //foo.x = 20;               //not valid: x cannot be modified
    cout << foo.x << '\n';      //ok: data member x can be read
    return 0;
}

/*
The member functions of a const object can only be called if they are themselves specified as const members: in the
example above, member get cannot be called from foo.

Note that const can be used to qualify the type returned by a member function. This const is not the same as the one
which specifies a member as const. Both are independent and are located at different places in the function prototype:

int get() const {return x;}         //const member function
const int& get() {return x;}        //member function returning a const&
const int& get() const {return}     //const member function returning a const&

*/

//In essence, const members shall not modify the state of an object

//const objects are limited to access only member functions marked as const, but non-const are no restricted and thus can access
//both const and non-const member functions alike.
