// Passing custom values from derived class

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Base class parameterized constructor WITH default values
    Person(string n = "", int a = 0)
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

    // // 1️⃣ Constructor using DEFAULT values of Person()
    // Student(int r) : Person()
    // { // Calls Person("Unknown", 18)
    //     roll = r;
    //     cout << "Student Constructor (Default Base Call) Called\n";
    // }

    // 2️⃣ Constructor passing CUSTOM values to Person()
    Student(int r, string n, int a) : Person(n, a)
    {
        roll = r;
        cout << "Student Constructor (Custom Base Call) Called\n";
    }

    void show()
    {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main()
{

    // cout << "\nCreating s1 (uses default base constructor):\n";
    // Student s1(101); // Person() → default values

    // s1.show();

    cout << "\nCreating s2 (passes custom values to base constructor):\n";
    Student s2(102, "Rahat", 21); // Person("Rahat",21)

    s2.show();

    return 0;
}
