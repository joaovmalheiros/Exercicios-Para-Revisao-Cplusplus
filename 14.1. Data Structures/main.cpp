#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movies_t {
    string title;
    int year;
} mine, yours;

void printmovie (movies_t movie);

int main()
{
    string mystr;

    mine.title = "2001 A Space Odissey";
    mine.year = 1968;

    cout << "Enter title: ";
    getline(cin, yours.title);
    cout << "Enter year: ";
    getline(cin, mystr);
    stringstream(mystr) >> yours.year;

    cout << "My favorite movie is:\n";
    printmovie(mine);

    cout << "And yours is:\n";
    printmovie(yours);
    return 0;
}

void printmovie (movies_t movie)
{
    cout << movie.title;
    cout << " (" << movie.year << ")\n";
}

//The example shows how the members of an object act just as regular variables.
//But the objects mine and yours are also variables with a type (movies_t). For example, both have been passed to function
//printmovie just as if they were simple variables.
