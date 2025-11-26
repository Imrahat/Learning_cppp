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

class B : public A
{
public:
    B()
    {
        cout << "B Constructor\n";
    }
};

class C : public A
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

    // PROBLEM: Which ‘a’ are we referring to? From B → A OR from C → A?
    // cout << obj.a;   // ❌ ERROR: ambiguous

    // You must specify:
    cout << obj.B::a << endl;
    cout << obj.C::a << endl;
}
