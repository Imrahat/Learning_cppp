#include<iostream>

using namespace std;

int main(){

    int a=10;
    float b = 2.5;
    // Implicite -- done automatically by the compiler -- C++ automatically converts smaller → larger data type (to prevent data loss).
    int result = a + b; // result is converted into int
    float result2 = a + b; // result is converted into float
    cout<<a + b<<endl; // result is automatically converted into float
    cout<<result<<endl;
    cout << result2<<endl;

    // Explicit -- Done manually by the programmer using casting syntax 

    int x =5;
    int y = 2;

    float result3 = (float)x / y; // float division -> stored as float
    int result4 = (float)x / y;   // float division -> stored as int (fraction lost)
    float result5 = x / y;     // int / int -> integer division first -> then converted to float -- result is 2.0 and .5(decimal part) is already lost during integer division and assigning it to float cannot recover it

    cout<<result3<<endl;
    cout << result4 << endl;
    cout<< result5<< endl;
}

// Type Casting means converting one data type into another — for example, converting an int to a float, or a float to an int.

/*
// 🔹 Variables
    int a = 5;
    int b = 2;
    float c = 2.5;
    double d;

    cout << fixed << setprecision(2); // always show 2 decimals

    cout << "==========================\n";
    cout << "1️⃣  IMPLICIT TYPE CASTING\n";
    cout << "==========================\n";

    // a is int, c is float
    float result1 = a + c;  // int is implicitly promoted to float
    cout << "float result1 = a + c; // 5 + 2.5 = " << result1 << endl;

    int result2 = a + c;    // float result truncated to int
    cout << "int result2 = a + c; // 5 + 2.5 = " << result2 << " (fraction lost)" << endl;

    // int / int
    float result3 = a / b; // 5/2 = 2 (integer division) then converted to float
    cout << "float result3 = a / b; // 5 / 2 = " << result3 << " (integer division first)" << endl;

    cout << "\n==========================\n";
    cout << "2️⃣  EXPLICIT TYPE CASTING (C-STYLE)\n";
    cout << "==========================\n";

    // cast int to float to get proper float division
    float result4 = (float)a / b; // 5.0 / 2 = 2.5
    cout << "float result4 = (float)a / b; // 5 / 2 = " << result4 << endl;

    // cast float to int
    int result5 = (int)c; // 2.5 -> 2
    cout << "int result5 = (int)c; // 2.5 -> " << result5 << endl;

    // cast float to double
    d = (double)c;  // 2.5 -> 2.5 in double
    cout << "double d = (double)c; // 2.5 -> " << d << endl;

    cout << "\n==========================\n";
    cout << "3️⃣  EXPLICIT TYPE CASTING (C++ STYLE - static_cast)\n";
    cout << "==========================\n";

    float result6 = static_cast<float>(a) / b; // 5.0 / 2 = 2.5
    cout << "float result6 = static_cast<float>(a) / b; // 5 / 2 = " << result6 << endl;

    int result7 = static_cast<int>(c); // 2.5 -> 2
    cout << "int result7 = static_cast<int>(c); // 2.5 -> " << result7 << endl;

    double result8 = static_cast<double>(a) / static_cast<double>(b); // 5 / 2 -> 2.5 in double
    cout << "double result8 = static_cast<double>(a) / static_cast<double>(b); // 5 / 2 = " << result8 << endl;

    cout << "\n==========================\n";
    cout << "4️⃣  SUMMARY EXAMPLES\n";
    cout << "==========================\n";

    cout << "int / int assigned to int: " << a / b << endl;         // 2
    cout << "int / int assigned to float: " << float(a / b) << endl; // 2.0 (decimal lost)
    cout << "float / int: " << c / b << endl;                     // 1.25
    cout << "int / float: " << a / c << endl;                     // 2.00
    cout << "float / float: " << c / static_cast<float>(b) << endl; // 1.25


*/