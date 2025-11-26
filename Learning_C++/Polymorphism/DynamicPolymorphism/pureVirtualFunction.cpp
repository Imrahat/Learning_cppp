#include<iostream>
using namespace std;

class Employee {
    public:
    Employee(){
        cout<<" Constructor for Emoployee\n";
    }
    virtual void calculateSalary()= 0;
};

class FullTime : public Employee {
    public:
    int salary;
    FullTime(int s=0){
        salary = s;
    }
    void calculateSalary() override{
        cout<<" Full-time salary: "<<salary<<endl;
    }
};

class PartTime : public Employee {
    void calculateSalary() override {
        cout<<" Part-time salary: 20,000"<<endl;
    }
};

int main() {
    // Employee e;
    
    Employee *e;

    FullTime f1(20000);
    e = &f1;
    e->calculateSalary();

    FullTime f2;
    e= &f2;
    e->calculateSalary();

    PartTime p1;
    e = &p1;
    e->calculateSalary();
    
}

// A pure virtual function is a virtual function that has no body in the base class and must be overridden in the derived class.

// It makes the base class abstract, meaning you cannot create an object of that class.