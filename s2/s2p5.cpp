#include<iostream>
using namespace std;
class ArraySum{
    int arr[10];
    int sum=0;
    public:
    ArraySum(){
        cout<<"enter array elements"<<endl;
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        
    }
    void findSum(){
        for(int i=0;i<10;i++){
            sum=sum+arr[i];
        }
        cout<<"sum is"<<sum;
    }
};
int main(){
    ArraySum a;
    a.findSum();
}