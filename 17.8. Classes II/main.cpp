#include <iostream>

using namespace std;

//It is possible to define a different implementation for a template when a specific type is passed as template argument.
//This is called a template specialization.


//class template:
template <class T>
class mycontainer {
    T element;
public:
    mycontainer (T arg) {element = arg;}
    T increase () {return ++element;}
};

//class template specialization:
template<>
class mycontainer <char> {
    char element;
public:
    mycontainer(char arg){element = arg;}
    char uppercase ()
    {
        if ((element>='a') && (element<='z'))
        element+= 'A'-'a';
        return element;
    }

};

int main()
{
    mycontainer<int> myint (7);
    mycontainer<char> mychar ('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    return 0;
}

//When we declare specializations for a template class, we must also define all its members, even those identical to
//the generic template class, because there is no inheritance of members from the generic template to the specialization.
