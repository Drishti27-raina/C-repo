#include<iostream>
using namespace std;
class B;
class A{
    
    int a;
    public:
    A(int x){
        a=x;
    }
    friend int sum(A,B);
};
class B{
    int b;
    public:
    B(int y){
        b=y;
    }
    friend int sum(A,B);
};
int sum(A   obj1,B obj2){
    return obj1.a+obj2.b;
}
int main(){
    A obj1(2);
    B obj2(6);
   cout<< sum(obj1,obj2);
}