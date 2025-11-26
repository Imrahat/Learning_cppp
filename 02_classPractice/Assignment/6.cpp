// 6. Create two classes named Mammals nd Marine Animals. Create another class named Bluewhale
// which inherits both the above classes. Now create a function in each of these classes which
// prints "I am marine animal", "I am mammal", "I am belong to both". Now create an object for
// each of the above class and try calling
// a. Function of mammals by object of mammals
// b. Function of marine animal by object of marine animals.
// C. Function of BlueWhale by object of BlueWhale
// d. Function of parent class(s) by object of BlueWhale.


#include<iostream>
using namespace std;

class Mammals{
 public:
 void displayMammal(){
    cout<<"I am Mammal"<<endl;
 }

};
class Marine{
public:
void displayMarine(){
    cout<<"I am marine animal"<<endl;
}

};
class BlueWhale : public Mammals , public Marine {
 public:
 void displayBlueWhale(){
    cout<<"I am Both"<<endl;
 }

};


int main(){
  Mammals m1;
  m1.displayMammal();

  Marine m2;
  m2.displayMarine();

  BlueWhale b1;
  b1.displayBlueWhale();
  b1.displayMammal();
  b1.displayMarine();
}