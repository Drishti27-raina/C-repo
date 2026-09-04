#include<iostream>
using namespace std;
class employee{
    string employeeName;
 int basicSalary;
 int HRA;
 int DA;
    
    public:
    employee(string n,int s){
        
        employeeName=n;
        basicSalary=s;
    }
    void calculateHRA(){
        HRA= ((20.0/100)*basicSalary);
        cout<<HRA;
        
    }
    void calulateDA(){
        DA=((10.0/100)*basicSalary);
        cout<<DA;
    }
    void grossSalary(){
        cout<<basicSalary+HRA+DA;
    }
};
int main(){
    employee e("Drishti ",20000);
    cout<<"hra is:";
    e.calculateHRA();
    cout<<"DA is:";
    e.calulateDA();
    cout<<"Gross salary is:"<<endl;
    e.grossSalary();
}