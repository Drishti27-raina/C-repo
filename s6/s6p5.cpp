#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    cout<<"Enter an index"<<endl;
    cin>>i;
    try{
        if(i<0||i>9){
        throw "invalid index";
        
    }}
    catch(const char* e){
        cout<<"Error:"<<e<<endl;
    }
}