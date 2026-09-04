#include<iostream>
using namespace std;
class Number{
    int n;
    bool even=false;
    public:
    void input(int num){
        n=num;
    }
    
    void isEven(){
        if (n%2==0){
            even=true;
        }
        else{
            even=false;
        }
    }
    void displayResult(){
        if(even==true){
            cout<<"entered number is even"<<endl;
            
        }
        else{
            cout<<"entered number is odd"<<endl;
        }
    }
};
int main(){
    Number n1;
    n1.input(5);
    n1.isEven();
    n1.displayResult();
}
