//WAP that calculates commission of a salesman.For every salesman, a target is defined.If he sellsproduct less than the target assigned, he got no commission.If he complete the target, he gets a10 % commission the extra sales make, if he sells beyond the target, he gets a 25 % commissionon extra sales.The program must record the sales of each month made by the salesman.Thecommission is calculated at the end of the year.


#include<iostream>
using namespace std;

class SalesRecord{
    int target;
    int sales[12];
    
    public:
    void input(){
        cout<<"Enter monthly target::\n";
        cin>>target;

        
        for(int m=0;m<12;m++){
            cout<<"Enter sales for month "<<m+1<<endl;
            cin>>sales[m];
        }

    }
    void commission(){
        int totalCommission=0;
        for(int m=0;m<12;m++){
            int commission;
            if(sales[m]==target){
                commission = (sales[m]*10)/100;
            }else if(sales[m]>target){
                int extrasales = sales[m] - target;
                commission = (extrasales * 25)/100;
            }else{
                commission =0;
            }
            totalCommission += commission;
        }
        cout<<"Total commission after one year:: "<<totalCommission;
    }
};

int main(){
    SalesRecord s1;
    s1.input();
    s1.commission();
}




















// #include<iostream>
// using namespace std;

// class Record{
//     int salesmanId,target,sales,month;
//     public:
//     Record(int id=0,int t=0,int s=0,int m=0){
//         salesmanId = id;
//         target = t;
//         sales = s;
//         month = m;
//     }
//     void input(){
//     cout<<"Enter salesman: "<<endl;
//     cin>>salesmanId;
//     cout<<"Enter month: "<<endl;
//     cin>>month;
//     cout<<"Enter Target: "<<endl;
//     cin>>target;
//     cout<<"Enter sales: "<<endl;
//     cin>>sales;
//     }
//     void commission(){
//         int commission=0;
//         if(sales == target){
//              commission += (sales * 10)/100;
//         }else if(sales >= target){
//             int extraSales = sales - target;
//             commission += (extraSales * 25)/100;
//         }else{
//             commission = 0;
//         }
//         cout<<"Commisssion:: "<<commission<<endl;
//     }
    
// };

// int main(){
//     Record r1(1,10000,9000,1),r2;
//     r2.input();
//     r1.commission();
//     r2.commission();
    
// }