/*
 Class Type to Basic Type Conversion
 It is the process of converting a class object into a basic (built-in) data type like int, float, char, etc.

 This is also called "user-defined to basic type conversion".

 User-Defined → Basic type conversion is done using operator overloading in C++.
*/

#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    // Conversion function: class type → basic type
    operator int()
    {
        return (hours * 60 + minutes); // returns total minutes
    }
};

int main()
{
    Time t1(2, 30); // 2 hours 30 minutes
    int totalMinutes;

    totalMinutes = t1; // invokes operator int() --It invokes the operator int as soon as t1 object is assigned to an int datatype
    
    // totalMinutes = t1.operator int()
    cout << "Total minutes = " << totalMinutes << endl;
    return 0;
}
