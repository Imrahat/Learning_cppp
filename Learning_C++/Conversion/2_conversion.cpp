/*
 Basic Type to Class Type Conversion
 It is the process of converting a basic (built-in) data type like int, float, etc., into a class type (object).

 Also known as “Basic to User-defined Type Conversion”.

 Basic-to–User-Defined Type Conversion can be done using function overloading
 **Basic type → user-defined type conversion

is done using a CONSTRUCTOR, not function overloading.**

Specifically:
👉 It is done using a single-argument constructor
👉 Also called a conversion constructor
👉 It is a type of constructor overloading
*/

#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }

    // Constructor for basic type to class type conversion
    Time(int totalMinutes)
    {
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }

    void display()
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main()
{
    int total = 130; // total minutes

    Time t1;    // empty object
    t1 = total; // invokes constructor Time(int)  // copy initialization

    cout << "Time = ";
    t1.display();

    Time t2 = 140; // Direct initialization
    t2.display();

    Time t3(150);
    t3.display();

    return 0;
}

// #include <iostream>
// using namespace std;

// class Time
// {
//     int hours;
//     int minutes;
//     int totalMinutes;

// public:
//     Time(int h=0,int m=0,int t=0){
//         hours=h;
//         minutes=m;
//         totalMinutes = t;
//     }
//     void input(){
//         cout<<"Enter Total minutes?? "<<endl;
//         cin>>totalMinutes;

//     }

//     // Constructor for basic type to class type conversion
//     Time(int totalMinutes)
//     {
//         hours = totalMinutes / 60;
//         minutes = totalMinutes % 60;
//     }

//     void display()
//     {
//         cout << hours << " hours and " << minutes << " minutes" << endl;
//     }
// };

// int main()
// {
//     Time t1;
//     t1.input();
//     t1.display();
// }
