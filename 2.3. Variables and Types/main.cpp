#include <iostream>
#include <string>

using namespace std;

//Introduction to strings:
//One example of compound type is the string class. Variables of this type are able to store sequences of characters,
//such as words or sentences. A very useful feature!

//A first difference with fundamental data types is that in order to declare and use objects (variables) of this type,
//the program needs to include the header where the type is defined within the standard library (header <string>)

int main()
{
    string mystring1;
    string mystring2 = "This is a string";
    string mystring3("This is another string");
    string mystring4{"Another string!"};
    mystring1 = "This is a string";
    cout << mystring1;



    return 0;
}
