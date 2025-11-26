// Write a Program to find a number is PERFECT OR NOT

#include<iostream>
    using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter a positive number"<<endl;
    cin>>n;

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum += i;
        }   
    }
    if (sum == n)
    {
        cout << "The number you have entered is PERFECT NUMBER" << endl;
    }
    else
    {
        cout << "The number you have entered is NOT PERFECT NUMBER" << endl;
    }

    return 0;
}

// A perfect number is a positive integer that equals the sum of its proper divisors(all divisors except the number itself).

//     Example 1 :

//     6

//     Divisors = 1,
//     2, 3, 6

//           Proper divisors = 1 + 2 + 3 = 6
// ✅ So,
//     6 is a perfect number.