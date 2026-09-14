#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){
        
        real=r;
       
        img=i;

    }
    Complex add(Complex c){
        
       return     Complex ( real+c.real,img+c.img);
        
    }
    Complex multiply(Complex c){
        return Complex( real*c.real -img*c.img ,img*c.real+ real*c.img);
    }
    void display( ){
        cout<<real<<"+"<<"i"<<img;
    }
    friend Complex subtract(Complex c1,Complex c2);

};
Complex subtract(Complex c1,Complex c2){
    return Complex
    (c1.real-c2.real,
    c1.img-c2.img);
    
}
int main(){
    Complex c1(4,5);
    Complex c2(3,6);
    Complex sum=  c1.add(c2);
    Complex multiply=c1.multiply(c2);
    Complex minus=subtract(c1,c2);
    cout<<"sum is"<<endl;
    sum.display();
   cout<< "difference is"<<endl;
   minus.display();
   cout<<"multiply is"<<endl;
   multiply.display();

    


}