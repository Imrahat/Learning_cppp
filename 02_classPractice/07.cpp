// wriye a program to display prime number between 1 and 100

#include<iostream>
using namespace std;

//without using ARRAY

int main(){
    cout<<"prime number between 1 and 100"<<endl;
    for(int i=2;i<100;i++){
        int flag=0;
        for(int j=2;j<i;j++){
        if(i%j == 0){
            flag=1;
            break;
        }}
        if(flag == 0){
            cout<<i<<" ";
        }
    }
}


//using ARRAY

// int main(){
//     int arr[100],index=0;
//     cout<<"Prime number between 1 and 100"<<endl;

//     for(int i=2;i<100;i++){
//         int flag=0;
//         for(int j=2;j<i;j++){
//             if(i%j == 0){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             arr[index]=i;
//             index++;
//         }
//     }
//     for(int k=0;k<index;k++){
//         cout<<arr[k]<<" ";
//     }
// }