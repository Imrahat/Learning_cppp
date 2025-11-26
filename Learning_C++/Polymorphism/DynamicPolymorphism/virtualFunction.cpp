#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<" Base class\n";
    }
};

class Derived : public Base {
    public:
    void show() override {
        cout<<" Derived class\n";
    }
};

int main() {
    // Base b1;
    // b1.show();
    // Derived d1;
    // d1.show();


    Base *b;
    Derived d;
    b= &d;
    b->show();
    
}

// A virtual function in C++ is a function in a base class that you want to override in the derived class and ensure that the correct function is called based on the object type at runtime, not the pointer/reference type.

// A virtual function allows runtime polymorphism.It ensures that when you call a function using a base class pointer, the derived class version runs.

// A virtual function is a member function in a base class that you can override in a derived class, enabling runtime polymorphism. It allows the program to decide which function to call at runtime based on the actual type of the object, not the type of the pointer/reference.