//Write a program to ADD numbers

#include<iostream>
using namespace std;

int main(){
    int sum=0,n;
    cout<<"Enter a number of your choise"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        sum +=i;
    }
    cout<<"The sum of numbers is "<<sum<<endl;
    return 0;
}