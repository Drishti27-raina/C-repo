#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"enter your marks of 5 subjects"<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>marks[i];
    try{
        if (marks[i]<0|| marks[i]>100){
            throw marks[i];
        }
    }
    catch(int m){
        cout<<"error: in  "<<m<<"  Invalid marks"<<endl;
    }
    
        }
   
}  

