#include <iostream>
using namespace std;

// 🔷 Abstract Class
class Shape
{
public:
    int sides;

    // Constructor (YES, abstract classes can have constructors)
    Shape(int s)
    {
        sides = s;
        cout << "Shape Constructor Called\n";
    }

    // Normal function (allowed in abstract class)
    void info()
    {
        cout << "This is a shape with " << sides << " sides.\n";
    }

    // Pure virtual function (must be overridden)
    virtual void area() = 0; // makes this class abstract
};

// 🔶 Derived Class
class Rectangle : public Shape
{
public:
    int length;
    int width;

    // Rectangle constructor
    Rectangle(int l, int w) : Shape(4)
    { // calling base constructor
        length = l;
        width = w;
        cout << "Rectangle Constructor Called\n";
    }

    // Implementing pure virtual function
    void area() override
    {
        cout << "Rectangle Area = " << length * width << endl;
    }
};

int main()
{
    // Shape s;   // ❌ ERROR: Cannot create object of abstract class

    // ✔ Creating object of derived class
    Rectangle r(10, 5);

    r.info(); // calling normal function from abstract base class
    r.area(); // calling overridden function

    Shape *s;
    s = &r;
    s->info();
    s->area();

    s->sides=6;
    s->info();

    

    // Rectangle r1(11,5);

    return 0;
}
