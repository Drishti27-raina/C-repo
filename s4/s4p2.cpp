#include<iostream>
using namespace std;
class Maximum{
    public:
    void max(int a,int b){
        if(a>b){
            cout<<a<<"is greater"<<endl;
        }
        else{
            cout<<b<<"is greater"<<endl;
        }
    }
    void max(int a,int b ,int c){
        if(a>b&&a>c){
            cout<<a<<"is greater"<<endl;
        }
        else if(b>a&&b>c){
            cout<<b<<"is greater"<<endl;
        }
        else{
            cout<<c<<"is greater"<<endl;
        }
    }
    void max(double a,double b){
        if(a>b){
            cout<<a<<"is greater"<<endl;
        }
        else{
            cout<<b<<"is greater"<<endl;
        }
    }
    
    
    
};
int main(){
    Maximum m;
    m.max(5,6);
    m.max(1,0,5);
    m.max(2.4,6.8);
}