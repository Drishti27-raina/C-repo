#include<iostream>
using namespace std;
class Vehicle{
    protected:
    string reg;
    string company;
    public:
    Vehicle(string  r,string c){
        reg=r;
        company=c;
        
    }
    
};
class car:public Vehicle{
    protected:
    string fuel;
    int capacity;
    public:
    car(string r,string c,string f,int e):Vehicle(r,c){
        fuel=f;
        capacity=e;
        
    }
    void display(){
        cout<<"Car details"<<endl;
        cout<<"Registration number is:"<<reg<<endl;
        cout<<"Company is:"<<company<<endl;
        cout<<"Fuel type is:"<<fuel<<endl;
        cout<<"Fuel capacity is "<<capacity<<endl;
        cout<<"---------------------------------"<<endl;
    }
};
class bike:public Vehicle{
    protected:
    string fuel;
    int capacity;
    public:
    bike(string r,string c,string f,int e):Vehicle(r,c){
        fuel=f;
        capacity=e;
        
    }
    void display(){
        cout<<"Bike details"<<endl;
        cout<<"Registration number is:"<<reg<<endl;
        cout<<"Company is:"<<company<<endl;
        cout<<"Fuel type is:"<<fuel<<endl;
        cout<<"Fuel capacity is "<<capacity<<endl;
        cout<<"-------------------------------"<<endl;
    }
};
int main(){
    car c1("JK02BN8899","rolls royce phantom","petrol",100);
    bike b1("JK02AK5919","Royal enfield thunderbird","petrol",20);
    c1.display();
    b1.display();
}
