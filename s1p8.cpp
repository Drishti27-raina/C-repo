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
    int max=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    }
    cout<<"maximum value is:"<<max;
    return 0;
}