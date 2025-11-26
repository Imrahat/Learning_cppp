#include<iostream>
using namespace std;

class Student{
    public:
    int StudentID;
    string StudentName;

    Student(){
        cout<<"Hello, Student!!\n";
        cout<<"Enter Your Name?\n";
        cin>>StudentName;
    }
    void display(){
        cout<<"Name :: "<< StudentName;
    }
};

int main() {
    Student s1;
    s1.display();

    return 0;
}

// A default constructor is a constructor that :

//     -takes no parameters

//     -is automatically created by the compiler if you don’t write any constructor

//     -is used to initialize objects with default values