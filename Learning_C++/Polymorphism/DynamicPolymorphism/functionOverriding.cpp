#include<iostream>
using namespace std;

class A
{
public:
    void show() { cout << "Base\n"; }
};

class B : public A
{
public:
    void show() { cout << "Derived\n"; }
};

int main() {
    // A a1;
    // a1.show();
    B b1;
    b1.show();   
}

// Function Overriding means redefining a function in the derived class that already exists in the base class, with the same name, same parameters, and same return type.

// It is used for runtime polymorphism.