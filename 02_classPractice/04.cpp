// write a program to PERFORM MATHEMATICAL OPERATIONS

#include<iostream>
using namespace std;
  
int main(){
    int ch;
    float a,b;
    char ans;

    do{
        cout<<"Select operation:\n";
        cout<<"1.Addition\n";
        cout << "2.Subtraction\n";
        cout << "3.Multiplication\n";
        cout << "4.Division\n";
        cout << "Enter your choise(1-4)\n";
        cin>>ch;
        cout<<"Enter the first number\n";
        cin>>a;
        cout<<"Enter the second number\n";
        cin>>b;

        switch (ch)
        {
        case 1:
            cout<<"result"<<a+b<<endl;
            break;
        
        case 2:
           cout<<"Result"<<a-b<<endl;
            break;
        case 3:
            cout<<"result"<<a*b<<endl;
            break;
        case 4:
           if(b!=0){
            cout<<"Result:"<<a/b<<endl;
           }else{
            cout<<"Error: Division by zero is not allowed.\n";
           }
            break;
        default:
            cout<<"Invalid choise\n";
            break;
        }
        cout<<"do you want to continue....";
        cin>>ans;

    }while(ans=='y' || ans=='Y');
 }