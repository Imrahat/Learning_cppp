#include<iostream>
using namespace std;

double calculation(int arr[], int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    double a = 0.5 * sum;
    return a;
}


int main(){
    int num;
    cout<<"Enter the number of element\n";
    cin>>num;

    int array[num];

    cout<<"Enter "<<num<<"numbers for array\n";
    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    cout<<"calculation::";
    double result = calculation(array, num);
    cout<<result;

}