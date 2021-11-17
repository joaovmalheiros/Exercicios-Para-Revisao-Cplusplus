#include <iostream>

using namespace std;

//Nesting structures: structures can be nested in such a way that an element of a structure is itself another structure:

struct movies_t {
    string title;
    int year;
};

struct friends_t {
    string name;
    string email;
    movies_t favorite_movie;
}charlie, maria;

int main()
{
    friends_t * pfriends = &charlie;
    return 0;
}
