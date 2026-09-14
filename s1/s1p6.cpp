#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int sum=0;
    while(n>0){
        int L_digit=n%10;
        sum=sum+L_digit;
        n/=10;
        
    }
    cout<<"Sum of all digits of a number:"<<sum;
    return 0;
}