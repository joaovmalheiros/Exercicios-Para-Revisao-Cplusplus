#include <iostream>

using namespace std;

/*
Special member functions are member functions that are implicitly defined as member of classes under certain
circumstances. There are six:

- Default Constructor   C::C();
- Destructor            C::~C();
- Copy Constructor      C::C(const C&);
- Copy Assignment       C& operator= (const C&);
- Move Constructor      C::C (C&&);
- Move Assignment       c& operator= (C&&);

*/

//Default Constructor: is the constructor called when objects of a class are declared, but are no initialized with
//any arguments. If a class definition has no constructors, the compiler assumes the class to have an implicitly
//default constructor:

//Class declared with an implicit constructor:
class Example {
public:
    int total;
    void accumulate(int x) {total += x;}
};

//Class declared with an explicit constructor (replaces the implicit default constructor taking none):
class Example2 {
public:
    int total;
    Example2 (int initial_value) : total(initial_value) { };
    void accumulate(int x){total += x;}
};

//Example3 has a default constructor(i.e., a constructor without parameters) defined as an empty block.
//This allows objects of class Example3 to be constructed without arguments.
class Example3{
    string data;
public:
    Example3(const string& str) : data(str) {}
    Example3() {}
    const string& content() const {return data;}
};

int main()
{
    Example ex; //Objects of this class can be constructed by simply declaring them without any arguments, because
    //the compiler assumes the class has a default constructor.

    Example2 ex1(100); //ok : calls constructor
    //Example2 ex2; //not valid : no default constructor

    Example3 foo;
    Example3 bar("Example");

    cout << "bar's content: " << bar.content() << '\n';

    return 0;
}
