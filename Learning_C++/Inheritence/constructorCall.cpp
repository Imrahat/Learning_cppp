// Parameterized Constructor + Multiple Inheritance

#include<iostream>
    using namespace std;

class A
{
public:
    A(int x) { cout << "A: " << x << endl; }
};

class B
{
public:
    B(int y) { cout << "B: " << y << endl; }
};

class C : public A, public B
{
public:
    C(int p, int q) : A(p), B(q)
    {
        cout << "C constructor" << endl;
    }
};

int main() {
    C obj(10,20);
    
    return 0;
}