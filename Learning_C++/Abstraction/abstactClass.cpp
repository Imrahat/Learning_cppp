#include <iostream>
using namespace std;

class Shape
{
public:
    // Pure virtual function
    virtual void area() = 0; // Makes Shape an abstract class
};

class Circle : public Shape
{
public:
    int r;

    Circle(int radius)
    {
        r = radius;
    }

    void area() override
    {
        cout << "Circle Area = " << 3.14 * r * r << endl;
    }
};

int main()
{
    // Shape s;    // ❌ ERROR: Cannot create object of abstract class
    
    Shape *s1;  // creating the base class pointer
    Circle c1(2);
    s1 = &c1;
    s1->area();

    Circle c(5); // ✔ OK
    c.area();
}
