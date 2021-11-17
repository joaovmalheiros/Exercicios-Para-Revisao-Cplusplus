#include <iostream>

using namespace std;

//Pointers and Constant:
//Pointers can be used to access a variable by its address, and this access may include modifying the value pointed.
//But it is also possible to declare pointers that can access the pointed value to read it, but not to modify it.
// For this, it is enough with qualifying the type pointed to by the pointer as const.

//One of the use cases of pointers to const elements is as function parameters: a function that takes a pointer
//to non-const as parameter can modify the value passed as argument, while a function that takes a pointer to
//const as parameter cannot.
void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  // increment value pointed
    ++current;     // increment pointer
  }
}

//These pointers point to constant content they cannot modify, but they are not constant themselves: i.e., the pointers
//can still be incremented or assigned different addresses, although they cannot modify the content they point to.
void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

int main()
{
    int x;
    int y = 10;
    //Here p points to a variable, but points to it in a const-qualified manner, meaning that it can read the value
    //pointed, but it cannot modify it.
    //As a safety feature, pointers to const are not implicitly convertible to pointers to non-const.
    const int * p = &y;
    x = *p;          // ok: reading p
    //*p = x;          // error: modifying p, which is const-qualified

    int numbers[] = {10,20,30};
    increment_all (numbers,numbers+3);
    print_all (numbers,numbers+3);

    return 0;
}
