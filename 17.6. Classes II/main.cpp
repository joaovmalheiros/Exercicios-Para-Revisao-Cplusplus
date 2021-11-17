#include <iostream>

using namespace std;

//Overloading members on constness

//Member functions can be overloaded on their constness: i.e., a class may have two member functions with identical signatures
//except that one is const and the other is not: in t his case, the const version is called only when the object is itself const
//and the non-const version is called when the object is itself non-const.

class MyClass {
    int x;
public:
    MyClass (int val) : x(val) {}
    const int& get() const {return x;}
    int& get() {return x;}
};

int main()
{
    MyClass foo(10);
    const MyClass bar(20);
    foo.get() = 15;     //ok: get() returns int&
    //bar.get() = 25;   //not valid: get() returns const int&
    cout << foo.get() << '\n';
    cout << bar.get() << '\n';
    return 0;
}
