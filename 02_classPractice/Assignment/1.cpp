#include<iostream>
using namespace std;

class Distance{
    int feet,inche;
    public:
    void input(){
        cout<<"Enter distance (Format:: feet : inches)"<<endl;
        cin>>feet>>inche;
    };
    void display(){
        cout<<feet<<" feet "<<inche<<" inche "<<endl;
    }
    // Distance addition(Distance d1, Distance d2){
    //     Distance temp;
    //     temp.feet = d1.feet + d2.feet;
    //     temp.inche = d1.inche + d2.inche;

    //     if (temp.inche >= 12)
    //     {
    //         temp.feet += temp.inche / 12;
    //         temp.inche = temp.inche % 12;
    //     }
    //     return temp;
    // }
    friend Distance add(Distance d1, Distance d2);
};
Distance add(Distance d1, Distance d2){
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inche = d1.inche + d2.inche;

    if(temp.inche >= 12){
        temp.feet += temp.inche/12;
        temp.inche = temp.inche % 12;
    }
    return temp;
    // int sum_feets, sum_inches;
    // sum_feets = d1.feet + d2.feet;
    // sum_inches = d1.inche + d2.inche;

    // if(sum_inches>=12){
    //     sum_feets += sum_inches/12;
    //     sum_inches = sum_inches % 12;
    // }

    // cout<<sum_feets<<" feet "<<sum_inches<<" inches "<<endl;
}

int main(){
    Distance d1;
    Distance d2;
    d1.input();
    d2.input();

    // Distance d3 = add(d1,d2);
    // d3.display();

    Distance d3;
    d3 = add(d1, d2);
    d3.display();

    // Distance d3;
    // d3 = d3.addition(d1,d2);
    // d3.display();

    

    // add(d1, d2);
}


// --------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class Distance
// {
//     int feet, inche;

// public:
//     void input()
//     {
//         cout << "Enter distance (Format:: feet : inches)" << endl;
//         cin >> feet >> inche;
//     };
//     void add(Distance d1, Distance d2)
//     {
//         int sum_feets, sum_inches;
//         sum_feets = d1.feet + d2.feet;
//         sum_inches = d1.inche + d2.inche;

//         if (sum_inches >= 12)
//         {
//             sum_feets += sum_inches / 12;
//             sum_inches = sum_inches % 12;
//         }
//         cout << sum_feets << " feet " << sum_inches << " inches " << endl;
//     }
// };

// int main()
// {
//     Distance d1;
//     Distance d2;
//     d1.input();
//     d2.input();

//     Distance d3;
//     d3.add(d1, d2);
// }