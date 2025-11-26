#include <iostream>
using namespace std;

class A
{
public:
    int data;
    A()
    {
        cout << "A constructor\n";
        data = 100;
    }

    void showA()
    {
        cout << "Data from A = " << data << endl;
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "B constructor\n";
    }

    void showB()
    {
        cout << "Class B function\n";
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "C constructor\n";
    }

    void showC()
    {
        cout << "Class C function\n";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D constructor\n";
    }

    void showD()
    {
        cout << "Class D function\n";
    }
};

int main()
{
    D obj;

    obj.showA(); // from A (no ambiguity)
    obj.showB(); // from B
    obj.showC(); // from C
    obj.showD(); // from D
}
