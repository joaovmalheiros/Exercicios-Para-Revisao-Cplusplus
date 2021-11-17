#include <iostream>

using namespace std;

//Type aliases (typedef / using)

//A type alias is a different name by which a type can be identified

//It can be used to reduce the length of long or confusing type names, but they are most useful as tools to abstract
//programs from underlying types they use. For example, by using an alias of int to refer to a particular kind of
//parameter instead of using int directly, it allow for the type to be easily replaced by long(or some other type)
//in a later version, without having to chance every instance where it is used.

//In C++, there are two syntaxes for creating such type aliases:
//1- Using the typedef keyword:  typedef existing_type new_type_name;
//2- using new_type_name = existing_type;
//Both are equivalent. The only difference being that typedef has certain limitations in the realm of templates
//that using has not. Therefore, using is more generic, although typedef has a longer history and is probably more common
//in existing code.

int main()
{
    typedef char C;
    //using C = char;
    typedef unsigned int WORD;
    //using WORD = unsigned int;
    typedef char * pChar;
    //using pChar = char *;
    typedef char field [50];
    //using field = char [50];

    //Once these aliases are defined, they can be used in any declaration just like any other valid type:
    C mychar, anotherchar, *ptc1;
    WORD myword;
    pChar ptc2;
    field name;

    mychar = 'a';
    myword = 0;
    ptc2 = &mychar;

    cout << mychar << '\n';
    cout << myword << '\n';
    cout << *ptc2 << '\n';
    name[0] = 'J';
    name[1] = 'O';
    name[2] = 'A';
    name[3] = 'O';
    name[4] = '\n';

    while(name[myword] != '\n')
    {
        cout << name[myword] << "  ";
        myword++;
    }

    cout << '\n' << myword << '\n';


    return 0;
}

//Note that neither typedef nor using create new distinct types. They only create synonyms of existing types.
