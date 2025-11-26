#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A()
    {
        cout << "A Constructor\n";
        a = 10;
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "B Constructor\n";
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "C Constructor\n";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D Constructor\n";
    }
};

int main()
{
    D obj;

    cout << "Value of a = " << obj.a << endl; // ✔ Works, no ambiguity
}
