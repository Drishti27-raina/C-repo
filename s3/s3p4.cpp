#include<iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    double balance;
    public:
    void getvalue(){
        cout<<"Enter account number:"<<endl;
        cin>>accountNumber;
        cout<<"Enter balance:"<<endl;
        cin>>balance;   }
    void display(){
        cout<<"Account number is:"<<accountNumber<<"and balance is:"<<balance<<endl;
    }
    void transfer(BankAccount &receiver,double Amount){
        if (balance>=Amount){
            balance-=Amount;
            receiver.balance+=Amount;
            cout<<"Transfer successful"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }

};
int main(){
    BankAccount sender,receiver;
    double amount;
    sender.getvalue();
    receiver.getvalue();
    cout<<"Enter amount to transfer:"<<endl;
    cin>>amount;
    sender.transfer(receiver,amount);
    cout<<"Sender account details:"<<endl;
    sender.display();
    cout<<"Receiver account details:"<<endl;
    receiver.display();
    return 0;
}