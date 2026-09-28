#include<iostream>
using namespace std;
class Account{
    protected:
    int account;
    double balance;
    public:
    Account(int a,double b){
        account=a;
        balance=b;
        
    }
    
    
};
class SavingAcc:public Account{
    protected:
    float interest;
    public:
    SavingAcc(int a,double b,float i):Account(a,b){
        interest=i;
    }
    
    void display(){
        cout<<"Saving account  details"<<endl;
        cout<<"Account number  is:"<<account<<endl;
        cout<<"Balance is:"<<balance<<endl;
        cout<<"Interest is:"<<interest<<"%"<<endl;
        cout<<"---------------------------------"<<endl;
    }
};
class currentAcc:public Account{
    protected:
    float trans;
    public:
    currentAcc(int a,double b,float t):Account(a,b){
      trans=t;
    }
    
    void display(){
        cout<<"Saving account  details"<<endl;
        cout<<"Account number  is:"<<account<<endl;
        cout<<"Balance is:"<<balance<<endl;
        cout<<"Transaction per day is:"<<trans<<endl;
        cout<<"---------------------------------"<<endl;
    }
};
int main(){
    SavingAcc s(203,200000,4);
    currentAcc c(2133,3000,20000);
    s.display();
    c.display();}