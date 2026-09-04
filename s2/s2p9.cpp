#include <iostream>
using namespace std;
class Bank{
    int accNO;
    int DEPamt;
     int WITHamt;
    double balance;
    public:
    Bank(int a,double b){
        
        accNO=a;
        balance=b;
    }
    void deposit( int amt1)
    
    { 
        DEPamt=amt1;
    }
    void withdraw(int amt2)
    {
        if (balance==0){
            cout<<"your balance is not sufficient to withdraw";
        }
        else {
            WITHamt=amt2;
        }
    }
    void displayBalance(){
        cout<<balance+DEPamt-WITHamt;
    }

};
int main(){
    Bank b(123,20.70);
    b.deposit(9);
    b.withdraw(2);
    b.displayBalance();
    
    
}