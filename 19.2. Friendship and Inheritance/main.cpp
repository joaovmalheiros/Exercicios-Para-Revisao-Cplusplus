#include <iostream>

using namespace std;

//Inheritance between classes: Classes in C++ can be extended, creating new classes which retain characteristics of the
//base class. The derived class inherits the members of the base class, on top of which it can add its own members.

//Example: Rectangles and triangles. These two polygons have certain common properties, such as the values needed to
//calculate theirs areas (they both can be described simply with a height and a width/base). This could be represented
//with a class Polygon from which we would derive the two other ones: Rectangle and Triangle.

//Classes that are derived from others inherit all the accessible members of the base class. That means that if a base
//class includes a member A and we derive a class from it with another member called B, the derived class will contain
//both member A and member B.


//The protected access specifier used in class Polygon is similar to private. Its only difference occurs in fact with
//inheritance: When a class inherits another one, the members of the derived class can access the protected members
//inherited from the base class, but not its private members.
class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b) { width = a; height = b;}
};

//The public access specifier may be replaced by any one off the other access specifiers(protected or private). This access
//specifier limits the most accessible level for the members inherited from the base class: The members with a more
//accessible level are inherited with this level instead, while the members with an equal ore more restrictive access
//level keep their restrictive level in the derived class.
class Rectangle : public Polygon{
public:
    int area() {return width * height;}
};

class Triangle : public Polygon {
public:
    int area() {return width * height / 2;}
};


int main()
{
    Rectangle rect;
    Triangle trgl;
    rect.set_values(4, 5);
    trgl.set_values(4, 5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}

//The public keyword after the colon (class Rectangle : public Polygon) denotes the most accessible level the members
//inherited from the class that follows it (in this case Polygon) will have from the derived class (in this case Rectangle).
//Since public is the most accessible level, by specifying this keyword the derived class will inherit all the members
//with the same levels they had in the base class.

//With protected, all public members of the base class are inherited as protected in the derived class. Conversely,
//if the most restricting access level is specified(private), all the base class members are inherited as private.

//Actually, most use cases of inheritance in C++ should use public inheritance. When other access levels are needed for
//base classes, they can usually be better represented as member variables instead.
