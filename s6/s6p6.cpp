#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    try{
        if(age<18){
            throw "Not eligible for vote";
        }
        cout<<"You are eligible to vote"<<endl;
    }
    catch(const char*e){
        cout<<"Error:"<<e<<endl;
    }
}  