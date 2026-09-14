#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
    public:
    void getvalue(){
        cout<<"Enter feet:"<<endl;
        cin>>feet;
        cout<<"Enter inches:"<<endl;
        cin>>inches;  
    }
    void display(){
        cout<<"Distance is:"<<feet<<"feet and "<<inches<<"inches"<<endl;
    }
    void sum(Distance d1,Distance d2){
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        if (inches>=12){
            feet+=inches/12;
            inches=inches%12;
        }
    }  

};
int main(){
    Distance d1,d2,d3;
    d1.getvalue();
    d2.getvalue();
    d3.sum(d1,d2);
    d3.display();
    return 0;
}