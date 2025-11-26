#include<iostream>
using namespace std;

int main(){
    int n, digit, sum=0;
    cout<<"Enter a number\n";
    cin>>n;
    int num = n;

    while(n  > 0){
        digit = n % 10;
        sum  += digit;
        n = n / 10;
    }

    cout<< " The number you entered is " << num<<" and the sum of the digit is :: "<< sum<< endl;
    // cout<<n;
    // cout<< 1 % 10;


}



/// if any number is modulus to 10 then we can get the last digit eg-- 12 % 10 gives 2 and 2 is the last digit
/// if any number is divided by 10 then we can remove the last digit if the variable where we are storing is int eg-- 12 / 10 gives 1