#include<iostream>
using namespace std;
class book{
    int book_id;
    string book_title;
    int copies;
    public:
     void input(){
        cout<<"enter book id"<<endl;
        cin>>book_id;
        cout<<"enter book title"<<endl;
        cin>>book_title;
        cout<<"enter no. of copies"<<endl;
        cin>>copies;

     }
    void display(){
        cout<<"Book id is"<<book_id<<endl;
        cout<<"Book title is"<<book_title<<endl;
        cout<<"No.of copies are"<<copies<<endl;

    } 
    void exchange(book &other){
        swap(book_id,other.book_id);
        swap(book_title,other.book_title);
        swap(copies,other.copies);
    }
    friend  book copy_count(book b1,book b2);
};
book copy_count(book b1,book b2){
    if(b1.copies>b2.copies){
        cout<<"book 1 have more copies"<<endl;
    }
    else{
        cout<<"book 2 have more copies"<<endl;
    }
}
int main(){
    book b1,b2;
    cout<<"book 1 details"<<endl;
    b1.input();
    cout<<"book 2 details are"<<endl;
    b2.input();
    b1.exchange(b2);
    cout<<"After exchange book1"<<endl;
    b1.display();
    cout<<"After exchange book 2"<<endl;
    b2.display();
    cout<<"it is found that"<<endl;
    book b3=copy_count(b1,b2);
}