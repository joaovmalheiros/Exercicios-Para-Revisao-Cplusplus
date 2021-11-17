#include <iostream>

using namespace std;

//Efficiency considerations and const references

//If these are long strings, it may mean copying large quantities of data just for the function call.
string concatenate1(string a, string b)
{
    return a + b;
}

//Arguments by reference do not require a copy. The function operates directly on the strings passed as arguments,
//and, at most, it might mean the transfer of certain pointers to the function.
//In this regard, this version is more efficient than the version taking values, since it does not need to
//copy expensive-to-copy strings
string concatenate2(string& a, string& b)
{
    return a + b;
}

//On the flip side, functions with reference parameters are generally perceived as functions that modify the arguments passed
//The solution is for the function to guarantee that its reference parameters are not going to be modified by this function.
//This can be done by qualifying the parameters as constant
//Then, the function is forbidden to modify the values of neither a nor b, but can access their values as references without
//having to make actual copies of the strings.
//Extremely popular for arguments of compound types.
string concatenate3(const string& a, const string& b)
{
    return a + b;
}

int main()
{
    string name1 = "Lasanha";
    string name2 = " de Berinjela";
    string name3;

    name3 = concatenate3(name1, name2);

    cout << name1 << '\n';
    cout << name2 << '\n';
    cout << name3 << '\n';
    return 0;
}
