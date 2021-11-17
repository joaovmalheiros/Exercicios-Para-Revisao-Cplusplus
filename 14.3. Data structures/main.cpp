#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Pointers to structures: like any other type, structures can be pointed to by its own type of pointers

struct movies_t {
    string title;
    int year;
};

int main()
{
    string mystr;

    movies_t amovie;
    movies_t * pmovie;
    pmovie = &amovie;

    cout << "Enter title: ";
    getline(cin, pmovie->title);
    cout << "Enter year: ";
    getline(cin, mystr);
    (stringstream) mystr >> pmovie->year;

    cout << "\nYou have entered:\n";
    cout << pmovie->title;
    cout << " (" << pmovie->year << ")\n";

    return 0;
}

//The arror operator (->) is a dereference operator that is used exclusively with pointers to objects that have members.
//This operator serves to access the member of an object directly from its address.

//pmovie->title == (*pmovie).title

/*
a.b      Member b of object a
a->b     Member b of object pointed to by a  (  == (*a).b  )
*a.b     Value pointed to by member b of object a   (   == (a.b)  )
*/
