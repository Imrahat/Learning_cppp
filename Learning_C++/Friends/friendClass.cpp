#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
public:
    void input(string n,int a)
    {
       name = n;
       age = a;
    }
friend class Record;
};
class Record{
    public:
    void display(Student s){
        cout << "Name::" << s.name << endl;
        cout << "age::" << s.age << endl;
    }
};

int main()
{
    Student s1;
    s1.input("Rahat",23);
    Record r1;
    r1.display(s1);

    Student s2;
    s2.input("raja",22);
    r1.display(s2);
    Record r2;
    r2.display(s2);
}