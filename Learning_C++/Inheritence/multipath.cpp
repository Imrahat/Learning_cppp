#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};

class B :  public A
{
};
class C :  public A
{
};

class D : public B, public C
{
}; // multipath

int main()
{
    D obj;
    //obj.show(); // ❌ Ambiguity if virtual is not used
}
