#include<iostream>
using namespace std;
template<class T>
T larger(T a,T b){
    if(a>b){
        return a;
        
    }
    else{
      return b;
    }
}
template <class T>
    void swapvalue(T &a,T &b){
        T temp=a;
        a=b;
        b=temp;
    }

int main(){
    cout<<"integer"<<endl;
    int x=7;
    int y=8;
    cout<<"larger number is"<<larger(x,y)<<endl;
    swapvalue(x,y);
    cout<<"after swapping "<<x<<" "<<y<<endl;
    cout<<"FLOAT"<<endl;
    float P=0.6;
    float Q=7.6;
    cout<<"larger number is"<<larger(P,Q)<<endl;
    swapvalue(P,Q);
    cout<<"after swapping "<<P<<" "<<Q<<endl;
}
