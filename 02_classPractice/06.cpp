// Write a program to display FACTOR OF A NUMBER

#include<iostream>
using namespace std;



int main(){
  // For only factors
   int n;
   int arr[100], index = 0;
   cout << "Enter NUMBER of your choise\n";
   cin >> n;

  for (int i = 1; i <= n; i++)
  {
      if (n % i == 0)
      {
          arr[index] = i;
          index++;
      }
  }
  cout << "The factors of the entered number is : ";
  for (int j = 0; j < index; j++)
  {
      cout << arr[j] << " ";
  }
}











