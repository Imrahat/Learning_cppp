#include<iostream>
using namespace std;

class Accounts
{
private:
    int balance;

public:
    Accounts(int b)
    {
        balance = b;
    }
    friend void showBalance(Accounts a);
};
void showBalance(Accounts a)
{
    cout << "Balance:: " << a.balance << endl;
}

int main(){
  Accounts a1(5000);
  showBalance(a1);
  Accounts ab2(6000);
  showBalance(ab2);
}