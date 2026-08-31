#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,90,70,30,40,10,90,30,40,2,90,30,90,50,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    
    for(int i=0;i<size;i++){
        bool alreadycounted=false;
        for(int j=0;j<i;j++){
            if (arr[i]==arr[j]){
                alreadycounted=true;
                break;}}
        
        if(alreadycounted==true){
            continue;}
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;}
        
        }        
            
            
            
            
        cout<<arr[i]<<" occurs "<<count <<"times"<<endl;    
        }
        
    }

