#include <iostream>
using namespace std;
class Book{protected:
    string title;
    string author_name;
    public:
    Book(string t,string a){
        title=t;
        author_name=a;
    }
};
class Ebook:public Book{
    protected:
    float size;
    string format;
    public:
    Ebook(string t,string a,float s,string f):Book(t,a){
        size=s;
        format=f;
    }
    void display(){
        cout<<"Book title:"<<title<<endl;
        cout<<"Book author:"<<author_name<<endl;
        cout<<"Book size:"<<size<<"mb"<<endl;
        cout<<"Book format:"<<format<<endl;
    }
    
};
int main()
{
    Ebook b[2]={
        Ebook("Electronics","jb gupta",335,"zip"),
        Ebook("Maths","Rd sharma",80,"pdf")
    };
    cout<<"Ebook details"<<endl;
    for(int i=0;i<2;i++){
        b[i].display();
        cout<<"---------------------"<<endl;
    }
}