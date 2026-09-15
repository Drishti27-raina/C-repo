#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int c,int d){
        a=c;
        b=d;
        
    };
    friend void largest(demo n);
};
void largest(demo n){
    if(n.a>n.b){
        cout<<"a is largest"<<endl;
    }
    else{
        cout<<"b is largest"<<endl;
    }
}
int main(){
    demo d (25,30);
    largest(d);
}