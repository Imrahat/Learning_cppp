#include<iostream>
using namespace std;

class Student
{
public:
    int StudentID;
    string StudentName;

    Student(int id, string n)
    {
        StudentID = id;
        StudentName = n;
    }
    void display()
    {
        cout<<" Hello, Student!!\n";
        cout<<" Id :: "<<StudentID<<endl;
        cout<<" Name :: "<<StudentName<<endl;
    }
};

int main() {

   Student s2(2, "RAHAT");
   s2.display();

    
    return 0;
}

// A parameterized constructor is a constructor that takes one or more parameters to give custom values to an object at the time of creation.