#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int id;
    
    public:
    Employee(string n,int i){
        name=n;
        id=i;
        
    }
};
class Manager:public Employee{
    protected:
    string department;
    double salary;
    public:
    Manager(string n,int i,string d,double s):Employee(n,i){
        department=d;
        salary=s;
        
    }
    void display(){
        cout<<"Name of employee:"<<name<<endl;
        cout<<"ID of employee:"<<id<<endl;
        cout<<" Department of employee:"<<department<<endl;     
        cout<<"Salary of employee:"<<salary<<endl;
        
    }
};
int main(){
    Manager M ("DR",10,"CSE",300000);
    M.display();
    
}