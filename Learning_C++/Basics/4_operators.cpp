#include <iostream>
using namespace std;

int main()
{
    // 🔹 Declare some variables for demonstration
    int a = 10, b = 3, result;
    bool condition;

    cout << "==============================\n";
    cout << "  ARITHMETIC OPERATORS\n";
    cout << "==============================\n";

    // +, -, *, /, %
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division (integer division)
    cout << "a % b = " << a % b << endl; // Modulus (remainder)

    cout << "\n==============================\n";
    cout << "  RELATIONAL OPERATORS\n";
    cout << "==============================\n";

    // ==, !=, >, <, >=, <=
    cout << "a == b -> " << (a == b) << endl;
    cout << "a != b -> " << (a != b) << endl;
    cout << "a > b  -> " << (a > b) << endl;
    cout << "a < b  -> " << (a < b) << endl;
    cout << "a >= b -> " << (a >= b) << endl;
    cout << "a <= b -> " << (a <= b) << endl;

    cout << "\n==============================\n";
    cout << "  LOGICAL OPERATORS\n";
    cout << "==============================\n";

    // &&, ||, !
    condition = (a > 5 && b < 5); // true && true = true
    cout << "(a > 5 && b < 5) -> " << condition << endl;

    condition = (a < 5 || b < 5); // false || true = true
    cout << "(a < 5 || b < 5) -> " << condition << endl;

    condition = !(a < b); // NOT false = true
    cout << "!(a < b) -> " << condition << endl;

    cout << "\n==============================\n";
    cout << "  ASSIGNMENT OPERATORS\n";
    cout << "==============================\n";

    // =, +=, -=, *=, /=, %=
    result = a; // assign value
    cout << "result = " << result << endl;

    result += 5; // result = result + 5
    cout << "result += 5 -> " << result << endl;

    result -= 2; // result = result - 2
    cout << "result -= 2 -> " << result << endl;

    result *= 3; // result = result * 3
    cout << "result *= 3 -> " << result << endl;

    result /= 4; // result = result / 4
    cout << "result /= 4 -> " << result << endl;

    result %= 3; // result = result % 3
    cout << "result %= 3 -> " << result << endl;

    cout << "\n==============================\n";
    cout << "  INCREMENT / DECREMENT\n";
    cout << "==============================\n";

    int x = 5;
    cout << "Initial x = " << x << endl;
    cout << "Post-increment x++ -> " << x++ << " (prints old, then adds 1)\n";
    cout << "Now x = " << x << endl;
    cout << "Pre-increment ++x -> " << ++x << " (adds 1, then prints)\n";
    cout << "Post-decrement x-- -> " << x-- << " (prints old, then subtracts 1)\n";
    cout << "Now x = " << x << endl;

    cout << "\n==============================\n";
    cout << " BITWISE OPERATORS\n";
    cout << "==============================\n";

    int p = 5, q = 3;
    // 5 = 0101 , 3 = 0011 in binary
    cout << "p & q  (AND)  -> " << (p & q) << endl; // 0101 & 0011 = 0001 (1)
    cout << "p | q  (OR)   -> " << (p | q) << endl; // 0101 | 0011 = 0111 (7)
    cout << "p ^ q  (XOR)  -> " << (p ^ q) << endl; // 0101 ^ 0011 = 0110 (6)
    cout << "~p     (NOT)  -> " << (~p) << endl;    // Inverts all bits
    cout << "p << 1 (Left shift)  -> " << (p << 1) << " (multiply by 2)\n";
    cout << "p >> 1 (Right shift) -> " << (p >> 1) << " (divide by 2)\n";

    cout << "\n==============================\n";
    cout << "  TERNARY OPERATOR\n";
    cout << "==============================\n";

    // Syntax: condition ? value_if_true : value_if_false
    int max = (a > b) ? a : b;
    cout << "Max of a and b = " << max << endl;

    cout << "\n==============================\n";
    cout << "  MISCELLANEOUS OPERATORS\n";
    cout << "==============================\n";

    int y = 42;
    cout << "sizeof(int) -> " << sizeof(int) << " bytes\n"; // shows size of int
    cout << "Address of y (&y) -> " << &y << endl;          // address operator

    int *ptr = &y;                                 // pointer to y
    cout << "Value using *ptr -> " << *ptr << endl; // dereference pointer
    cout << "Value of ptr(address) -> " << ptr << endl;

    return 0;
}
