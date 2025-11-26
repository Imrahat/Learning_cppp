#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v = 0)
    {
        value = v;
    }

    // -----------------------------
    // 1. Unary Operator Overloading
    // (++ prefix)
    // -----------------------------
    Number operator++()
    {
        value++; // prefix increment
        return *this;
    }

    // (-- postfix)
    Number operator--(int)
    {
        Number temp = *this;
        value--; // postfix decrement
        return temp;
    }

    // -----------------------------
    // 2. Binary Operator Overloading (Member Function)
    // -----------------------------
    Number operator+(Number n)
    {
        return Number(value + n.value);

        // Number temp;
        // temp.value = value + n.value;
        // return temp;
    }

    // -----------------------------
    // 3. Binary Operator Overloading (Friend Function)
    // -----------------------------
    friend Number operator-(Number a, Number b);

    // For printing
    void show()
    {
        cout << "Value = " << value << endl;
    }
};

// Friend function definition
Number operator-(Number a, Number b)
{
    return Number(a.value - b.value);
}

int main()
{

    Number n1(10), n2(5);

    // Unary
    ++n1; // prefix
    n1.show();

    n2--; // postfix
    n2.show();

    // Binary (member)
    Number n3 = n1 + n2;
    n3.show();

    // Binary (friend)
    Number n4 = n1 - n2;
    // Number n4 = operator-(n1,n2);
    n4.show();

    return 0;
}

/*
 #include <iostream>
using namespace std;

class Number {
public:
    int value;

    // Default constructor (NO parameters)
    Number() {
        value = 0;
    }

    Number add(Number n) {
        Number temp;
        temp.value = value + n.value; // manual assignment
        return temp;
    }
};

int main() {
    Number n1, n2;

    n1.value = 10;
    n2.value = 20;

    Number result = n1.add(n2);

    cout << "Result = " << result.value << endl;
}

*/