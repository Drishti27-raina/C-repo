#include<iostream>
using namespace std;
template <class T>
class Array{
    T arr[5];
    public:
    void getvalue(){
        cout<<"Enter 5  elements "<<endl;
        for (int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void  display(){
        cout<<"elements are:"<<endl;
        for (int i=0;i<5;i++){
            cout<<arr[1];
        }
    }
    T maximum(){
        T max=arr[0];
        for (int i=0;i<5;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }

T minimum(){
        T min=arr[0];
        for (int i=0;i<5;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;
    }};
    int main(){
        Array <int> a;
        a.getvalue();
        a.display();
        cout<<"MAX value is:"<<a.maximum()<<endl;
        cout<<" Min value is :"<<a.minimum()<<endl;
    }
    