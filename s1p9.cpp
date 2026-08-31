#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"enter array size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    }
    cout<<"minimum value is:"<<min;
    return 0;
}