// Parameterized Constructor WITH DEFAULT VALUES + Inheritance

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Parameterized constructor with default values
    Person(string n = "Unknown", int a = 18)
    {
        name = n;
        age = a;
        cout << "Person Constructor Called\n";
    }
};

class Student : public Person
{
public:
    int roll;

    // Derived class constructor
    // Passing only roll — Person() gets called with default values
    Student(int r) : Person()
    { // Person() → uses default values
        roll = r;
        cout << "Student Constructor Called\n";
    }
    // Student(int r) : Person("Rahat", 25)
    // { // Person() → uses default values
    //     roll = r;
    //     cout << "Student Constructor Called\n";
    // }
};

int main()
{
    Student s1(101); // Base uses default values
    cout << "\nName: " << s1.name
         << "\nAge: " << s1.age
         << "\nRoll: " << s1.roll;
}
