#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;

    void display(){
        cout<<"Name::"<< name<< endl;
        cout<<"age::"<<age<<endl;
    }
};

class Account {
    private:
    int balance;

    public:
    void setBalance(int b){
        balance = b;
    }
    void showBalance(){
        cout<<"Balance:: "<<balance<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "Rahat";
    s1.age =23;
    s1.display();

    Account a1;
    a1.setBalance(5000);
    a1.showBalance();
}