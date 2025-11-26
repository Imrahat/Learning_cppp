#include<iostream>
using namespace std;

class Counter {
    public:
    static int count;
    int countNormal;

    Counter(){
        count++;
    }

    void showCountNonStatic(){
        cout<<count;
        cout<<countNormal;
    }

    static void showCount(){
        cout<<" Count = "<<count<<endl;
        // cout<<" Count Normal = "<<countNormal;
        // count++;
        // cout << " Count = " << count << endl;
    }
};
int Counter::count = 1;

int main() {
    
    //Accessing static member function without creating an object
    Counter::showCount();

    Counter c1,c2;
    // c1.showCount();
    // c2.showCount();
    c2.showCount();
}

// A static member function in C++ is a function inside a class that :

//     -belongs to the class itself(not to any specific object)

//     -can be called without creating an object

//     -can access only static data members of the class

// | Function Type | Can Access Static Member ? | Can Access Non - Static Member ? |
//| -- -- -- -- -- -- -- -- -- -- -- -| -- -- -- -- -- -- -- -- -- -- -- -- -| -- -- -- -- -- -- -- -- -- -- -- -- -- -- -|
// | **Static function ** | ✔ YES | ❌ NO 
// **Non - static function ** | ✔ YES | ✔ YES |
