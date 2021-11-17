#include <iostream>

using namespace std;

//Notice that some operators may be overloaded in two forms: either as a member function or as a non-member function:
//The first case has been used in the example above for operator+. But some operators can also be overloaded as non-member
//functions; In this case, the operator function takes an object of the proper class as first argument.

class CVector {
public:
    int x, y;
    CVector () {}
    CVector (int a, int b) : x(a), y(b) {}
    CVector& operator= (const CVector& param);
};

CVector operator+ (const CVector& lhs, const CVector& rhs){
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

//(Keyword This) is also frequently used in operator= member functions that return objects by reference.
CVector& CVector::operator= (const CVector& param)
{
    x = param.x;
    y = param.y;
    return *this;
}

int main()
{
    CVector foo(3,1);
    CVector bar(1,2);
    CVector result;

    result = foo + bar;
    cout << result.x << ',' << result.y << '\n';

    return 0;
}
