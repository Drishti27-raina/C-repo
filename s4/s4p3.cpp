#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(int r,int i){
        real=r;
        img=i;
    }
    Complex operator +(Complex c){
        Complex temp(0,0);
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void display(){
        cout<<real<<"+ i"<<img<<endl;
    }
};
int main(){
    Complex c1(3,5);
    Complex c2(2,6);
    Complex c3=c1+c2;
    c3.display();
}