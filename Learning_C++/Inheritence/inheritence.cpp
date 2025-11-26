#include <iostream>
using namespace std;

class Animal
{ // Base Class
public:
    void eat()
    {
        cout << "Animal is eating\n";
    }
};

class Dog : public Animal
{ // Derived Class
public:
    void bark()
    {
        cout << "Dog is barking\n";
    }
};

int main()
{
    Dog d;
    d.eat();  // inherited from Animal
    d.bark(); // own function
}
