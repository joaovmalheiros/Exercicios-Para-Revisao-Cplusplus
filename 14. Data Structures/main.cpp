#include <iostream>

using namespace std;

//Data Structures: is a group of data elements grouped together under one name. The data elements, known as members,
//can have different types and different lengths.


//This declares a structure type, called product, and defines it having two members: weight and price, each of a different
//fundamental type. This declaration creates a new type(product), which is then used to declare three objects(variables)
//of this type: apple, banana, and melon.
struct product{
    int weight;
    double price;
}apple, banana;

int main()
{
    product melon;

    apple.weight = 2;
    apple.price = 1.5;
    banana.weight = 3;
    banana.price = 2.7;
    melon.weight = 15;
    melon.price = 5.3;

    return 0;
}
