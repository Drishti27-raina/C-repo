#include<iostream>
using namespace std;
int main(){
    int n,rev=0,digit, n_dup;
    
    cout<<"Enter a number";
    cin>>n;
    n_dup =n;
    while(n!=0){
      digit =n%10;
      rev =rev*10+digit;
      n=n/10;
    }
    if (rev==n_dup){
        cout<<"Your number is a palindrome";
        
    }
    else{
        cout<<"Number is not a palindrome";
    }
    
  
    return 0;
}