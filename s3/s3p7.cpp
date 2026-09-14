#include<iostream>
using namespace std;
class rectangle{
    int length,width;
    public:
    rectangle(int l=0,int w=0){
        length=l;
        width=w;

    }
    void display(){
        cout<<"Length is"<<length<<"and width is"<<width<<endl;
    }
    rectangle check (rectangle r){
        if(r.length*r.width==length*width)
        cout<<"equal area"<<endl;
        else
        cout<<"no equal area"<<endl;
    }
    friend rectangle newRect(rectangle r1,rectangle r2);
};
rectangle newRect(rectangle r1,rectangle r2){
        rectangle r3;
        r3.length=r1.length+r2.length;
        r3.width=r1.width+r2.width;
        return r3;
    }
int main (){
    rectangle r1(3,4);
    rectangle r2(5,6);
    cout<<"comparing the area turned out to be that they have"<<endl;
    r1.check(r2);
    rectangle r3 = newRect(r1, r2);
    cout<<"Dimensions of new rectangle is:"<<endl;
    r3.display();

}    