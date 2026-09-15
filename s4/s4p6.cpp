#include<iostream>
using namespace std;
class BankAccount{
    int acc_no;
    string customer_name;
    static  int total_acc;
    public:
    BankAccount(int a,string n){
        acc_no=a;
        customer_name=n;
        total_acc++;
    }
    static void  total(){
        cout<<"total accounts created are"<<total_acc;
    }
};
int BankAccount::total_acc=0;
int main(){
    BankAccount b1(20090,"Drishy");
    BankAccount b2(20010,"Raina");
    BankAccount::total();
}
