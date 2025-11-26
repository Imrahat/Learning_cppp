#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 7: " << square(7) << endl;
    return 0;
}
/*
An inline function is a special type of function in C++ where the compiler replaces the function call with the actual code of the function at compile time.
This helps to reduce function call overhead and can make the program faster for small, frequently called functions.

How it works

Normally, when you call a function, the program:

Jumps to the function definition.

Executes it.

Returns back to the calling code.

But with an inline function, the compiler replaces the call (like square(5)) with the actual code of the function (5 * 5), saving the overhead of a function call.
*/