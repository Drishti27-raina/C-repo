#include<iostream>
#include<cmath>
using namespace std;
class NegativeNumberException  {
    
};
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    try{
        if(a<0){
            throw NegativeNumberException();
        }
        else{
            cout<<sqrt(a)<<endl;
        }
    }
    catch(NegativeNumberException){
        cout<<"Error:square root a negative number cannot be calculated"<<endl;
    }
}