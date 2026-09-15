#include<iostream>
using namespace std;
class Area{
    int length;
    public:
    
    
    void area(double  radius){
        cout<<"Area of  a circle is"<<3.14*radius*radius<<endl;;
    }
    void area(int l1,int l2){
        cout<<"Area of a rectangle is"<<l1*l2<<endl;
    }
    void area(int l){
        cout<<"Area of a square is"<<l*l<<endl;
    }
};
int main(){
    Area a1;
    a1.area(4);
    a1.area(5,6);
    a1.area(2.5);
}