#include<iostream>
using namespace std;

class Constructor{
    public:
    int value;
    Constructor(){
        cout<<" Hello I am a Constuctor!!";
    }
};

int main() {
    Constructor c;

    
    return 0;
}

// A constructor is a special member function of a class that :

//     has the same name as the class

//     does not have a return type(not even void)

//     is automatically called when an object is created

// Why we use constructor?

// To initialize object data when the object is created.