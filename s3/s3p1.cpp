#include<iostream>
using namespace std;
class Number{
    int num;
    public:
    void getvalue(){
        cout<<"Enter a number:"<<endl;
        cin>>num;
    }
    void display(){
        cout<<"The sum  is:"<<num<<endl;
    }
    friend Number add(Number n1,Number n2);
};
Number add(Number n1,Number n2){
    Number n3;
    n3.num=n1.num+n2.num;
    return n3;
}   
int main(){
    Number n1,n2,n3;
    n1.getvalue();
    n2.getvalue();
    n3=add(n1,n2);
    n3.display();
    return 0;
}