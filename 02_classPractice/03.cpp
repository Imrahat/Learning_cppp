// Write a program to find wheather a number is PRIME OR NOT

#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime=true;

    cout<<"Enter a number"<<endl;
    cin>>n;

    if(n<=1){
        isPrime=false;
    }else{
        for(int i=2;i<n;i++){
            if(n%i == 0){
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<n<<" is a PRIME number";
    }else{
        cout<<n<<" is NOT A PRIME number";
    }
    return 0;
}