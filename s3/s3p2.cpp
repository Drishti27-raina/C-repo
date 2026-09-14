#include<iostream>
using namespace std;
class Student{
    int rollno;
    float marks;
    public:
    void getvalue(){
        cout<<"Enter roll number:"<<endl;
        cin>>rollno;
        cout<<"Enter marks:"<<endl;
        cin>>marks;}
    void dispalytopper(){
        cout<<"Roll number of topper is:"<<rollno<<"and marks are:"<<marks<<endl;
    }    
    friend Student findtopper(Student s1,Student s2);

};
Student findtopper(Student s1,Student s2){
    Student topper;
    if (s1.marks>s2.marks){
        topper=s1;
    }
    else{
        topper=s2;
    }
    return topper;
}
int main(){
    Student s1,s2,topper;
    s1.getvalue();
    s2.getvalue();
    topper=findtopper(s1,s2);
    topper.dispalytopper();
    return 0;
}
