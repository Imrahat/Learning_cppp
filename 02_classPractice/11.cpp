// program to find average and variance

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<"number::"<<endl;
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"Arrray::";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
        sum=sum + arr[i];
    }
    double p = (double)sum / n; //(double)sum temporarily converts the integer sum into a double for the purpose of this division.
    cout<<"Average of the array:: "<<p<<endl;

    double sum_1=0.0;
    double t;
    for(int i=0; i<n; i++){
        t=(arr[i]-p)*(arr[i]-p);
        sum_1 += t;
    }
    double v = (double)sum_1/n;
    cout<<"Variance:: "<<v<<endl;
    
    
}