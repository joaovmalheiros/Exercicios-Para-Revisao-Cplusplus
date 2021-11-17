#include <iostream>

using namespace std;


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

//const objects are actually very common. Most functions taking classes as parameters actually take them by const reference,
//and thus, these functions can only access their const members:

class MyClass {
    int x;
public:
    MyClass(int val) : x(val) {}
    const int& get() const {return x;}
};

void print(const MyClass& arg) {
    cout << arg.get() << '\n';
}

//If in this example get was not specified as const member, the call to arg.get() in the print function would no be possible,
//because const objects only have access to const member functions.

int main()
{
    MyClass foo (10);
    print(foo);
    return 0;
}
