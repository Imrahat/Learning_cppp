#include <iostream>
using namespace std;

class A
{ // Base Class 1
public:
    void displayA()
    {
        cout << "This is Class A\n";
    }
};

class B
{ // Base Class 2
public:
    void displayB()
    {
        cout << "This is Class B\n";
    }
};

class C : public A, public B
{ // Derived from A and B
public:
    void displayC()
    {
        cout << "This is Class C\n";
    }
};

int main()
{
    C obj;
    obj.displayA(); // from A
    obj.displayB(); // from B
    obj.displayC(); // own function
}
