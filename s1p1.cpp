#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b&&a>c){
        cout<<"a is greatest of all numbers";
    }
    else if(b>a && b>c){
        cout<<"b is greatest of all numbers";
    }
    else{
        cout<<"c is greatest of all numbers";
    }
    return 0;
    

    
    
}