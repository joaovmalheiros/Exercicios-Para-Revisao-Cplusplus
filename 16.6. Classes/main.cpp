#include <iostream>

using namespace std;

//Overloading operators

/*The operator overloads are just regular functions which can have any behavior; there is actually no requirement
that the operation performed by that overload bears a relation to the mathematical or usual meaning of the operator,
although it is strongly recommended. For example, a class that overloads operator+ to actually subtract or that overloads
operator== to fill the object with zeros, is perfectly valid, although using such a class could be challenging.
*/

class CVector {
    public:
        int x, y;
        CVector (){};
        CVector (int a, int b) : x(a), y(b) {}
        CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param){
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

int main()
{
    CVector foo (3,1);
    CVector bar (1,2);
    CVector result;
    result = foo + bar;
    cout << result.x << ',' << result.y << '\n';
    return 0;
}
