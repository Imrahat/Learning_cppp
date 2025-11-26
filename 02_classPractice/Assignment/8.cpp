#include<iostream>
using namespace std;

class Compare{
    public:
    int productValue;

    Compare(int p=0){
        productValue =p;
    }
    bool operator==(Compare c){
       return productValue == c.productValue;
    }
    bool operator<(Compare c){
       return productValue < c.productValue;
    }

};

int main(){
    Compare p1(100),p2(200);

    if(p1.operator==(p2)){
        cout<<"Price Same"<<endl;
    }else if( p2 < p1){
        cout<<"First product cost more";
    }else{
         cout<<"Second product cost more";
    }
}
