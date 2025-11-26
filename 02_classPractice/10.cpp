// Reverse of an ARRAY using While loop

#include<iostream>
using namespace std;

int main(){


    //-------------1-----------------
    // reverse without swapping (just print in reverse order) with user input value and fixed array size

    // int arr[5];
    // cout<<"Enter 5 number"<<endl;
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Array::";
    // int k = 0;
    // while (k < 5)
    // {
    //     cout << arr[k] << " ";
    //     k++;
    // }
    // cout<<"Array::";
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"Reverse Array::";
    // for(int j=4;j>=0;j--){
    //     cout<<arr[j]<<" ";
    // }


    //------------------2-----------------------
    //  reverse without swapping (just print in reverse order) with user input value and array size

    int n;
    cout<<"enter the size of arrray"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter " <<n<< "number"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array::";
    int k = 0;
    while (k < n)
    {
        cout << arr[k] << " ";
        k++;
    }
    cout<<"Array::";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Reverse Array::";
    for(int j=n-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }


    //------------------3---------------------------
    // Reverse using while loop with user input value and fixed array size


    // int arr[5];
    // cout<<"Enter 5 number"<<endl;
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    // int start=0,end=4;
    // while(start<end){
    //     int x=arr[start];
    //     arr[start]=arr[end];
    //     arr[end]=x;

    //     start++;
    //     end--;
    // }
    // cout<<"Reverse array:: ";
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }



    //----------------------4-------------------------
    // Reverse using while loop with input value and array size entered by user

    // int n;
    // cout<<"Enter the size of ARRAY"<<endl;
    // cin>>n;

    // int arr[n];
    // cout << "Enter " <<n<<" number" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int start = 0, end = n-1;
    // while (start < end)
    // {
    //     int x = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = x;

    //     start++;
    //     end--;
    // }
    // cout << "Reverse array:: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }


}




    //------------------5---------------------
    //--------same but written differently----------

    // #include <iostream>
    // using namespace std;

    // int main()
    // {
    //     const int SIZE = 5;
    //     int arr[SIZE];

    //     // Input from user
    //     cout << "Enter " << SIZE << " numbers:" << endl;
    //     int i = 0;
    //     while (i < SIZE)
    //     {
    //         cin >> arr[i];
    //         i++;
    //     }

    //     // Reverse array using while loop
    //     int start = 0, end = SIZE - 1;
    //     while (start < end)
    //     {
    //         int temp = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;

    //         start++;
    //         end--;
    //     }

    //     // Print reversed array
    //     cout << "Reversed array:" << endl;
    //     i = 0;
    //     while (i < SIZE)
    //     {
    //         cout << arr[i] << " ";
    //         i++;
    //     }

    //     return 0;
    // }
