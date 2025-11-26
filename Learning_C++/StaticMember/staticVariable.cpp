#include <iostream>
using namespace std;

void counter()
{
    static int count = 0; // If static wasn’t used, it would reset to 0 every time.---the variable count remembers its value between calls.
    count++;
    cout << "Count(static):: " << count<<endl;
}
void counterNormal()
{
    int count = 0;
    count++;
    cout << "Count(normal):: " << count<<endl;
}

class CounterClass{
    static int count; // declaration of static variable for class (defination or initailization should be outside) --Here, count is shared by all objects and keeps track of how many objects are created.
public:
    CounterClass(){
        count++;
        cout<<"Counter Class(Static):: "<<count<<endl;
    }
};

int CounterClass::count = 0; // defination

class CounterClassNormal
{
    int count=0; 
public:
    CounterClassNormal()
    {
        count++;
        cout << "Counter Class(Normal):: " << count << endl;
    }
};


int main()
{
    counter();
    counter();
    counter();
    counterNormal();
    counterNormal();
    counterNormal();

    CounterClass s,s1,s2,s3;
    CounterClassNormal n,n1,n2,n3;
}

/*A static variable is a special type of variable whose lifetime exists throughout the program, even if it is declared inside a function or class.
It retains its value between multiple function calls.

1. Static Variable Inside a Function

When you declare a variable as static inside a function, it:

Is created only once (not every time the function is called).

Keeps its value between function calls.

2. Static Data Member in a Class

When you declare a static member inside a class:

It is shared by all objects of that class.

Only one copy of that variable exists for all objects.

It must be defined outside the class as well.
*/