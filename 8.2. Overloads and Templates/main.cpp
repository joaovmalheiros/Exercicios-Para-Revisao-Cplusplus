#include <iostream>

using namespace std;

//Function templates: overloaded functions may have the same definition.
//Here, sum is overloaded with different parameter types, but with the exact same body:

int sum(int a, int b)
{
    return a+b;
}

double sum(double a, double b)
{
    return a+b;
}

//C++ has the ability to define functions with generic types, known as function templates.
//Define a function template follows the same syntax as a regular function, except that it is preceded by the template
//keyword and a series of template parameters enclosed in angle-brackets <>

template <class T>
T subtraction (T a, T b)
{
  T result;
  result = a - b;
  return result;
}

//Templates are a powerful and versatile feature. They can have multiple template parameters,
//and the function can still use regular non-templated types. For example:
template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

int main()
{
    cout << sum(20,30) << '\n';
    cout << sum(1.0, 1.5) << '\n';


    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = subtraction<int>(i,j);
    h = subtraction<double>(f,g);
    cout << k << '\n';
    cout << h << '\n';


    if (are_equal(10,10.0)) //Note that this example uses automatic template parameter deduction in the call to are_equal
        cout << "x and y are equal\n";
    else
        cout << "x and y are not equal\n";

    //are_equal(10,10.0) is equivalent    to 	are_equal<int,double>(10,10.0)



    return 0;
}
