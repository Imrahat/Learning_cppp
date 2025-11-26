#include<iostream>
using namespace std;
class Animal
{ // Base class
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{ // Derived class
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

int main()
{
    Dog d;
    d.eat();  // inherited from Animal
    d.bark(); // own function
}
