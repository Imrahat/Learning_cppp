#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    // 1️⃣ Default Constructor
    Student()
    {
        id = 0;
        name = "Unknown";
    }
    // 2️⃣ Parameterized Constructor (1 parameter)
    Student(string n){
        id = 0;
        name = n;
    }
    Student(int x)
    {
        id = x;
        name = "Unknown";
    }
    // 3️⃣ Parameterized Constructor (2 parameters)
    Student(int x, string n)
    {
        id = x;
        name = n;
    }
    void display(){
        cout<<" ID :: "<<id<<endl;
        cout<<" Name :: "<<name<<endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2(2);
    s2.display();

    Student s3("Islam");
    s3.display();

    Student s4(3, "Rahat");
    s4.display();
    
    
}

// Constructor Overloading means :A class has multiple constructors with the same name but different parameters.Why? So that you can create an object in different ways depending on what data you have.