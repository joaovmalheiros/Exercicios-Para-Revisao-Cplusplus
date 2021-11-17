#include <iostream>

using namespace std;

//Anonymous unions: when unions are member of a class (or structure), they can be declared with no name. In this case, they
//became anonymous unions, and its members are directly accessible from objects by their names.

//structure with regular union:
struct book1_t {
    char title[50];
    char author[50];
    union {
        float dollars;
        int yen;
    } price;
} book1;

//structure with regular union:
struct book2_t {
    char title[50];
    char author[50];
    union {
        float dollars;
        int yen;
    };
} book2;


int main()
{
    //Accessing members dollars and yen of an object of the first type (with regular union):
    book1.price.dollars = 5;
    book1.price.yen = 2;

    //Accessing members dollars and yen of an object of the second type (with anonymous union):
    book2.dollars = 3;
    book2.yen = 1;

    //Again, remember that because it is a member union (not a member structure), the members dollars and yen actually
    //share the same memory location, so they cannot be used to store two different values simultaneously. The price
    //can be set in dollars or in yen, but not in both simultaneously.

    return 0;
}
