//write a program to show function overloading

#include <iostream>
using namespace std;

// Overloaded functions
 class AreaOFShape{
    public:

    int area(int side){
         return side * side;
    }
    int area(int len, int bre){
        return len * bre;
    }
    float area(float radius){
        return (3.14 * radius * radius);
    }
    int area(int x, int y, int z)
     {
         return (x * y * z);
     }
 };

 int main(){
    AreaOFShape a1;
   
    cout<<"Area of square  "<<a1.area(4)<<endl;
    cout << "Area of rectangle  " << a1.area(3, 2)<<endl;
    cout << "Area of circle  " << a1.area(4.50f)<<endl;
    cout<<"Area of Cube "<<a1.area(2,2,2)<<endl;
 }
