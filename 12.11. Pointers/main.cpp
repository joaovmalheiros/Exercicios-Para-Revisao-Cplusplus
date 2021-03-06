#include <iostream>

using namespace std;

//Void Pointers:

/*
In C++, void represents the absence of type. Therefore, void pointers are pointers that point to a value that has no
type (and thus also an undetermined length and undetermined dereferencing properties).

This gives void pointers a great flexibility, by being able to point to any data type.

In exchange, they have a great limitation: the data pointed to by them cannot be directly dereferenced
(which is logical, since we have no type to dereference to).and for that reason, any address in a void pointer needs to
be transformed into some other pointer type that points to a concrete data type before being dereferenced.
*/


//One of its possible uses may be to pass generic parameters to a function. For example:
void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { char* pchar; pchar=(char*)data; ++(*pchar); }
  else if (psize == sizeof(int) )
  { int* pint; pint=(int*)data; ++(*pint); }
}

int main()
{
    char a = 'x';
    int b = 1602;
    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    cout << a << ", " << b << '\n';
    return 0;
}
