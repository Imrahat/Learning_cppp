#include <iostream>
using namespace std;

class A
{ // Base class
public:
    void showA()
    {
        cout << "Class A\n";
    }
};

class B : public A
{ // Derived from A (hierarchical)
public:
    void showB()
    {
        cout << "Class B\n";
    }
};

class C : public A
{ // Derived from A (hierarchical)
public:
    void showC()
    {
        cout << "Class C\n";
    }
};

class D : public B, public C
{ // Multiple inheritance
public:
    void showD()
    {
        cout << "Class D\n";
    }
};

int main()
{
    D obj;

    obj.showB();
    obj.showC();
    obj.showD();

    // Ambiguous: obj.showA();  // A comes from both B and C
}
