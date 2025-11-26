#include<iostream>
using namespace std;

class Animals{
    public:
    virtual void speaks(){
        cout<<" Animal Sound...\n";
    }
    virtual void sleep(){
        cout<<" Animal Sleeping...Zzz\n";
    }
};
class Dog : public Animals{
    public:
    void speaks() override{
        cout<<" Dogs Sound...\n";
    }
};
class Cats : public Animals{
    public:
    void speaks() override{
        cout<<" Cats Sound...\n";
    }
    void sleep() override{
        cout<<" Cat Sleeping...Zzz\n";
    }
};

int main() {
    Animals *a1;
    
    Dog d1;
    a1 = &d1;
    // d1.sleep();

    a1->speaks(); // runtime polymorphism...

    a1->sleep();


    Cats c1;
    a1 = &c1;

    a1->speaks();

    a1->sleep();

    // Dog d4;
    // d4.sleep();
    // d4.speaks();

    // Animals a3;
    // a3.sleep();
    // a3.speaks();

    
}