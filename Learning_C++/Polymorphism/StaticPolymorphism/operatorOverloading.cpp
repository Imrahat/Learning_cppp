// Operator Overloading in C++ means giving special meaning to an operator (like +, -, ==, >, etc.) when it is used with user-defined data types (objects).

#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Operator overloading for +
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // calls operator+
    c3.display();         // Output: 4 + 6i
    
    Complex c4;
    c4 = c1.operator+(c2);
    c4.display();
    return 0;
}
