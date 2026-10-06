#include<iostream>
using namespace std;
class BankAcc{
    double balance;
    public:
    BankAcc(double b){
        balance=b;
    }
    void withdraw(double amount){
        if(amount>balance){
            throw "Insufficient balance";
        }
        else{
            balance-=amount;
            cout<<"Transaction successful"<<endl;
            cout<<"Remaining balance is:"<<balance<<endl;
        }
    }
    
};
int main(){
    double a,b;
    cout<<"enter your balance:"<<endl;
    cin>>b;
    cout<<"enter amount:"<<endl;
    cin>>a;
    BankAcc b1(b);
    try{
        b1.withdraw(a);
         
    }
    catch(const char*s){
        cout<<"Error:"<<s<<endl;
    }
    
}