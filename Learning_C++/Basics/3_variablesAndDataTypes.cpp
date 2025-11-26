#include<iostream>
using namespace std;

int main(){
    int age = 20;          // stores integer value
    float height = 5.9;    // stores decimal value
    char grade = 'A';      // stores single character
    string name = "Rahat"; // stores text (string)
    bool isPass = true;    // stores true/false


    cout<<age<<endl;

    unsigned int x = 5;
    unsigned int y = -5; // when we assign a negative number , c++ will not store -5 directly, instead it wraps around using binary representation(2's complement).So internally, the value of -5 gets converted to a very large positive number.
    cout << x;

    return 0;
}

// variable - A variable is a named storage location in memory that holds a value which can change during program execution. Each variable has: 1.Name → identifier you choose 2.Type → kind of data it stores 3.Value → actual data stored 4.Memory address → where it’s stored in RAM. SYNTAX -- data_type variable_name = value;

// Datatypes - Data types define what kind of data a variable can hold and how much memory it uses in the computer.