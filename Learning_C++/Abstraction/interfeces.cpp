#include <iostream>
using namespace std;

// Interface (all pure virtual functions)
class Shape {
public:
    virtual void draw() = 0;   // pure virtual
    virtual void area() = 0;   // pure virtual
};

// Implementing Circle
class Circle : public Shape {
public:
    int r;
    
    Circle(int radius) {
        r = radius;
    }

    void draw() override {
        cout << "Drawing Circle\n";
    }

    void area() override {
        cout << "Circle Area = " << 3.14 * r * r << endl;
    }
};

// Implementing Rectangle
class Rectangle : public Shape {
public:
    int length, width;

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void draw() override {
        cout << "Drawing Rectangle\n";
    }

    void area() override {
        cout << "Rectangle Area = " << length * width << endl;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->draw();
    s->area();

    s = &r;
    s->draw();
    s->area();

    return 0;
}
