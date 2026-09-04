#include<iostream>
using namespace std;
class rectangle{
    float length;
    float breadth;
    float area;
    public:
    rectangle(){
        cout<<"Enter length and breadth of rectangle:"<<endl;
    }
    void input(float l,float b){
        length=l;
        breadth=b;
    }
    void calculateArea(){
        area =length*breadth;
    }
    void dispalyArea(){
        cout<<"Your area is:"<<area<<endl;
    }
};
int main(){
    rectangle r;
    r.input(3.4,5.5);
    r.calculateArea();
    r.dispalyArea();
}