#include <iostream>
using namespace std;
class Book{
    string title;
    string author;
    public:
    Book(string t,string a){
        title=t;
        author=a;
    }
    void display(){
        cout<<"your book title"<<title<<endl;
        cout<<"your author is"<<author;
    }
};
int main(){
    Book b( "electronics","JB gupta");
    b.display();
}