#include <iostream>
using namespace std;
class Student{
    static int count;
    public:
    Student() {
        count++;
        cout<<"Student is created"<<endl;}
    static void display(){
        cout<<"Total number of students are"<<count<<endl;
    }        
};
 int Student :: count=0;
int main(){
    Student s1;
    Student s2;
    Student s3;
    Student::display();
}
