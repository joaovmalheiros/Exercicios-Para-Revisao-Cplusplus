#include <iostream>

using namespace std;

//Just like we can create function templates, we can also create class templates, allowing classes to have members that use
//template parameters as types.

template <class T>
class mypair{
    T a, b;
public:
    mypair (T first, T second)
    {
        a = first; b = second;
    }
    T getmax();
};

//In case that a member function is defined outside the definition of the class template, it shall be preceded with the
//template<...> prefix:

template <class T>
T mypair<T>::getmax()
{
    T retval;
    retval = a>b? a : b;
    return retval;
}

int main()
{
    mypair<int> myobject (115, 36);
    mypair<double> myfloats (3.0, 2.18);
    cout << myobject.getmax();
    return 0;
}
