#include<iostream>
using namespace std;

class ComplexNumber{
    public:
    int real;
    int imag;

    ComplexNumber(int r=0,int i=0){
        real = r;
        imag = i;
    };
    friend ComplexNumber operator*(ComplexNumber c,ComplexNumber c1);
};
ComplexNumber operator*(ComplexNumber c,ComplexNumber c1){
  ComplexNumber temp;
  temp.real = (c.real * c1.real) -(c.imag * c1.imag);
  temp.imag = (c.real * c1.imag) + (c.imag * c1.real);
  return temp;
};
int main(){
    ComplexNumber c1(2,5),c2(3,3),c3;
    c3 = c1 * c2;
    //c3 = operator*(c1, c2);
    cout<<c3.real <<"+"<<c3.imag<<"i";
}