#include<iostream>
using namespace std;
template <class T>
class Result{
    T arr[5];
    public:
    void getvalue(){
        cout<<"Enter marks of 5 subjects "<<endl;
        for (int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    
        
    
    T total(){
        T sum=0;
        for (int i=0;i<5;i++){
            sum=sum+arr[i];
        }
        return sum;
    }
    float average(){
        return (float)total()/5;
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
        
    }
    void  display(){
        cout<<"Marks are:"<<endl;
        for (int i=0;i<5;i++){
            cout<<arr[1];
        cout <<"Toatl marks are:"<<total()<<endl;
        cout<<"Average marks :"<<average()<<endl;
        cout<<"MAXIMUM marks :"<<maximum()<<endl;
        cout<<"Minimum marks are:"<<minimum()<<endl;
}}};
    int main(){
        Result <int> a;
        a.getvalue();
        a.display();
        cout<<"For integer"<<endl;
        cout<<"MAX value is:"<<a.maximum()<<endl;
        cout<<" Min value is :"<<a.minimum()<<endl;
        cout<<"-----------------"<<endl;
         Result <float> b;
        b.getvalue();
        b.display();
        cout<<"For integer"<<endl;
        cout<<"MAX value is:"<<b.maximum()<<endl;
        cout<<" Min value is :"<<b.minimum()<<endl;
        cout<<"-----------------"<<endl;
    }
    