#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter two variables:"<<endl;
    cin>>a;
    cin>>b;
    cout<<"enter operator"<<endl;
    cin>>op;
    try{
        if (op!='+'&& op!='-' && op!='*' && op!='/'){
            throw op;
        }
        if(op=='/'&&b==0){
            throw 0;
        }
    
    switch(op){
        case'+':
        cout<<"Result :"<<a+b<<endl;
        break;
        case'-':
        cout<<"Result :"<<a-b<<endl;
        break;
        case'*':
        cout<<"Result :"<<a*b<<endl;
        break;
        case'/':
        cout<<"Result :"<<a/b<<endl;
        break;
         }
    }

    catch(char ){
        cout<<"Invalid operator"<<endl;
        
    } 
    catch(int ){
        cout<<"Division by zero error"<<endl;
    }
}