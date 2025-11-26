// Make a class named Fruit with a data member ‘fruits in basket’. Create another two classes named Apples and Mangoes to calculate the number of Apples and Mangoes in the basket. Write a program to print the number of fruits of each type and the total number of fruits in the basket.

#include<iostream>
using namespace std;

class Fruit{
    public:
    static int fruitInbasket;
    void display(){
        cout<<"Friuts in Basket:: "<<fruitInbasket;
    }
};
int Fruit::fruitInbasket =0;
class Apples:public Fruit{
    public:
    int apple;
    Apples(int a=0){
        apple = a;
        fruitInbasket += a;
    }
    void displayApple(){
        cout<<" Apple = "<<apple<<endl;
    }
};
class Mangoes:public Fruit{
    public:
    int mango;
    Mangoes(int a=0){
        mango = a;
        fruitInbasket += a;
    }
    void displayMango()
    {
        cout << " mango = " << mango << endl;
    }
};

int main() {
   Apples a1(5);
   Mangoes m1(6);
   a1.displayApple();
   m1.displayMango();
   m1.display();
    

    return 0;
}