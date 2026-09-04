#include <iostream>
using namespace std;

class student{
    string name;
    int roll_no;
    public:
    void setData(string n,int r){
        name=n;
        roll_no=r;
        
    }
    void displayData(){
        cout <<"enter details are:"<<endl;
        cout<<"Your name is:"<<name<<endl;
        cout<<"Your roll_no is:"<<roll_no<<endl;
    }
};
int main(){
    student s;
    s.setData("Drishti",10);
    s.displayData();
}