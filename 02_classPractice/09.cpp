// write the summification of 1D Array

#include<iostream>
using namespace std;

int main(){
    int arr[5],sum=0;

    cout<<"Enter 5 numbers"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int j=0;j<5;j++){
        sum += arr[j];
    }
    cout<<"Sum:: "<<sum;
    
}