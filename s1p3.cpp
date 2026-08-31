#include <iostream>
using namespace std;
int main(){
    int n ,remainder=0,fact=1;
    cout<<"Enter anumber";
    cin>>n;
    if(n<0){
        cout<<"Factorial of negative number is not possible";
    }
    else if(n==0){
        cout<<"Factorial of zero is one";
        
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
            
        }
    }
    cout<<"Factorial of a number is"<<fact;
    return 0;
}