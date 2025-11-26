// Parameterized Constructor with Default Parameters

#include <iostream>
    using namespace std;

class Student
{
public:
    int StudentID;
    string StudentName;

    Student(int id=0, string n="")
    {
        StudentID = id;
        StudentName = n;
    }
    void input(){
        cout<<" Enter your ID\n";
        cin>>StudentID;
        cout<<" Enter Your Name?\n";
        cin>>StudentName;
    }
    void display()
    {
        cout << " Hello, Student!!\n";
        cout << " Id :: " << StudentID << endl;
        cout << " Name :: " << StudentName << endl;
    }
};

int main()
{

    Student s1(2, "RAHAT");
    s1.display();

    Student s2;
    s2.display();

    Student s3;
    s3.input();
    s3.display();

    return 0;
}