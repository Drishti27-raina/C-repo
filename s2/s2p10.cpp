#include<iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    int perct;
    float  marks[5];
    float sum=0;
    float total_m=50;
    
    public:
    Student(){
       cout<<"enter your name:" <<endl;
       cin>>name;
       cout<<"enter your rollno:"<<endl;
       cin>>rollno;
       cout<<"enter marks in 5 subjects:"<<endl;
       for (int i=0;i<5;i++){
           cin>>marks[i];
       }
    }
    void total(){
        for(int i=0;i<5;i++){
            sum=sum+marks[i];
        }
        cout<<"total marks are:"<<sum<<endl;
        
    }
    void percentage(){
        perct=((sum/total_m)*100);
        
        cout<<"total percentage is"<<perct<<endl;
    }
    void grade(){
         if (perct>=90){
        cout<<"A";}
         else if (perct>=75||perct<=89){
        cout<<"B";}
         else if (perct>=60|| perct<=74){
        cout<<"C";}
         else if (perct>=40||perct<=59){
        cout<<"D";}
         else {
          cout<<"F";}
    }
};
int main(){
    Student s;
    s.total();
    s.percentage();
    s.grade();
    
}