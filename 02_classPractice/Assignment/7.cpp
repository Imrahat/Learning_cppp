#include<iostream>
using namespace std;

class FahrenheitToCalsius{
    float fahrenheit;

    public:
    FahrenheitToCalsius(float f=0){
        fahrenheit = f;
    }
    void input(){
        cout<<"Enter temperature in Fahrenheit???\n";
        cin>>fahrenheit;
    }
    operator float(){
        return (fahrenheit - 32) * 5/9;
    }
};

int main(){
    FahrenheitToCalsius f1(98);
    float calcius = f1;
    cout<<"to Calcius:: "<<calcius<<endl;
    //----------------------------------
    FahrenheitToCalsius f2;
    f2.input();
    float cal = f2;
    cout << "to Calcius:: " << cal;
}





















// #include <iostream>
// using namespace std;

// class FahrenheitToCalsius
// {
//     float fahrenheit;

// public:
//     FahrenheitToCalsius(float f = 0)
//     {
//         fahrenheit = f;
//     }
//     void input()
//     {
//         cout << "Enter temperature in Fahrenheit???\n";
//         cin >> fahrenheit;
//     }
//     operator float()
//     {
//         return (fahrenheit - 32) * 5 / 9;
//     }
// };

// int main()
// {
//     FahrenheitToCalsius f1(98);
//     float calcius = f1;
//     cout << "to Calcius:: " << calcius << endl;
//     FahrenheitToCalsius f2;
//     f2.input();
//     float cal = f2;
//     cout << "to Calcius:: " << cal;
// }