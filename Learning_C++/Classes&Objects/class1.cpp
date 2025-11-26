#include <iostream>
using namespace std;

class Distance
{ 
    int kilometer,meter;

    public:
    Distance(int k=0,int m=0){
        kilometer = k;
        meter = m;
    }
    void display(){
        cout<<kilometer<<" Km "<<meter<<" m "<<endl;
    }
    friend Distance add(Distance d1,Distance d2);

};
Distance add(Distance d1,Distance d2){
    Distance d;
    d.kilometer = d1.kilometer + d2.kilometer;
    d.meter = d1.meter + d2.meter;

    if(d.meter >=1000){
        d.kilometer += d.meter / 1000;
        d.meter = d.meter% 1000;
    }
    return d;

};
 
int main()
{
    int k,m,k1,m1;
    cout<<"Enter Km and m for first distance"<<endl;
    cin>>k>>m;
    cout << "Enter Km and m for second distance" << endl;
    cin >> k1 >> m1;

    Distance d1(k,m);
    Distance d3(k1,m1);

    Distance sum = add(d1, d3); 
    sum.display();
}

// #include <iostream>
// using namespace std;

// class Distance
// {
//     int kilometer, meter;

// public:
//     Distance(int k = 0, int m = 0)
//     {
//         kilometer = k;
//         meter = m;
//     }
//     void display()
//     {
//         cout << kilometer << " Km " << meter << " m " << endl;
//     }
//     friend Distance add(Distance d1, Distance d2);
// };
// Distance add(Distance d1, Distance d2)
// {
//     int sumKm,sumM;
//     sumKm = d1.kilometer + d2.kilometer;
//     sumM = d1.meter + d2.meter;

//     if (sumM >= 1000)
//     {
//         sumKm += sumM / 1000;
//         sumM = sumM % 1000;
//     }

//     cout << sumKm << " Km " << sumM << " m " << endl;
// };

// int main()
// {
//     int k, m, k1, m1;
//     cout << "Enter Km and m for first distance" << endl;
//     cin >> k >> m;
//     cout << "Enter Km and m for second distance" << endl;
//     cin >> k1 >> m1;

//     Distance d1(k, m);
//     Distance d3(k1, m1);

//     add(d1, d3);
// }

// #include <iostream>
// using namespace std;

// class Distance
// {
//     int kilometer,meter;

//     public:
//     Distance(){
//         cout<<"Enter Km"<<endl;
//         cin>>kilometer;
//         cout<<"Enter meter"<<endl;
//         cin>>meter;
//     }
//     void display(){
//         cout<<kilometer<<" Km "<<meter<<" m "<<endl;
//     }
//     friend Distance add(Distance d1,Distance d2);

// };
// Distance add(Distance d1,Distance d2){
//     int sumKm, sumM;
//         sumKm = d1.kilometer + d2.kilometer;
//         sumM = d1.meter + d2.meter;

//         if (sumM >= 1000)
//         {
//             sumKm += sumM / 1000;
//             sumM = sumM % 1000;
//         }

//         cout << sumKm << " Km " << sumM << " m " << endl;
// };

// int main()
// {
//     Distance d1;
//     Distance d3;
     
//     add(d1, d3);

// }
