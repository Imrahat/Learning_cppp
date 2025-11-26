#include <iostream>
using namespace std;

class A
{ // Base class
public:
    void msgA()
    {
        cout << "This is Class A\n";
    }
};

class B : public A
{ // Derived from A
public:
    void msgB()
    {
        cout << "This is Class B\n";
    }
};

class C : public B
{ // Derived from B
public:
    void msgC()
    {
        cout << "This is Class C\n";
    }
};

int main()
{
    C obj;      // Object of lowest class
    obj.msgA(); // from A
    obj.msgB(); // from B
    obj.msgC(); // from C
}
