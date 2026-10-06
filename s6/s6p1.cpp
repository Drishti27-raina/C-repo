#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    try{
        if(b==0){
            throw b;
        }
        
        cout<<a/b<<endl;
        
    }
    catch( int ){
        cout<<"Error:Division by zero is not allowed"<<endl;
    }
}