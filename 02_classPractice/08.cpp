//Write a program to find the prme factor of a number

#include<iostream>
using namespace std;

int main(){

//using Array

  int n,arr[100],index=0;

  cout<<"Enter number of your choise"<<endl;
  cin>>n;

  for(int i=2;i<=n;i++){
    if(n%i == 0){
        int flag=0;
        for(int j=2;j<i;j++){
          if(i%j == 0){
            flag=1;
            break;
          }
        }
        if(flag == 0){
            arr[index]=i;
            index++;
        }
    }
  }
  cout<<"The prime factors of "<<n<<" are :: ";
  for(int k=0;k<index;k++){
    cout<<arr[k]<<" ";
  }


//without using array

//   int n;

//   cout<<"Enter number of your choise"<<endl;
//   cin>>n;

//   cout<<"Prime factor of entered number::"<<endl;

//   for(int i=2;i<=n;i++){
//     if(n%i == 0){
//         int flag=0;
//         for(int j=2;j<i;j++){
//           if(i%j == 0){
//             flag=1;
//             break;
//           }
//         }
//         if(flag == 0){
//             cout<<i<<" ";
//         }
//     }
//   }
  
}
