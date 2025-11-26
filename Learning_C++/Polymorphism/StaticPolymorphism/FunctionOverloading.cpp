// Function Overloading is a feature of Compile-time Polymorphism in C++ where multiple functions can have the same name but different parameters.

// The compiler decides which version to call based on :

//     Number of parameters

//     Type of parameters

//     Order of parameters

#include <iostream>
    using namespace std;

class Print
{
public:
    void show(int a)
    {
        cout << "Integer: " << a << endl;
    }

    void show(double a)
    {
        cout << "Double: " << a << endl;
    }

    void show(string a)
    {
        cout << "String: " << a << endl;
    }
};

int main()
{
    Print p;
    p.show(5);       // calls show(int)
    p.show(3.14);    // calls show(double)
    p.show("Hello"); // calls show(string)
}
