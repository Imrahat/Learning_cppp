#include<iostream>
using namespace std;

class Counter{
    public:
    static int count;
    int distance;

    Counter(int d=0){
        distance =d;
        count++;
    };
};
int Counter::count =0;
int main(){
    Counter c1(100),c2(200),c3(100);
    cout<<"Count of active objects:::"<<Counter::count;
}