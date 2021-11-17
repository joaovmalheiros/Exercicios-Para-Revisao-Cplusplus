#include <iostream>

using namespace std;

//Unions: Unions allow one portion of memory to be accessed as different data types. Its declaration and use is similar
//to structures, but its functionality is totally different.

//This creates a new union type, identified by type_name, in which all its member elements occupy the same physical
//space in memory. The size of this type is the one of the largest member element.
union mytypes_t {
    char c;
    int i;
    float f;
} mytypes;
//Declares an object (mytypes) with three members:
//mytypes.c
//mytypes.i
//mytypes.f
//Each of these members is of a different data type. But since all of them are referring to the same location in memory,
//the modification of one of the members will affect the value of all of them. It is not possible to store different
//values in them in a way that each is independent of the others.

//One of the uses of a union is to be able to access a value either in its entirety or as an array or structure of smaller
//elements. For example:

union mix_t {
    int l;
    struct {
        short hi;
        short lo;
    } s;
    char c[4];
}mix;
/*
If we assume that the system where this program runs has an int type with a size of 4 bytes, and a short type of 2 bytes,
the union defined above allows the access to the same group of 4 bytes: mix.l, mix.s andd mix.c, and which we can use
according to how we wand to access these bytes: as if they were a single value of type int, or as if they were two values
of type short, or as an array of char elements, respectively. The example mixes types, arrays and structures in the union
to demonstrate different ways to access data.
*/

int main()
{
    return 0;
}
