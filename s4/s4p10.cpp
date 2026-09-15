#include<iostream>
using namespace std;
class Book{
    int book_id;
    string book_name;
    double price;
    static int count;
    public:
    Book(int id,string n,int p){
        book_id=id;
        book_name=n;
        price=p;
        count++;
        
    }
    void display(){
        cout<<"total books are "<<count;
    }
    inline double discount(){
        return price-(10.0/100)*price;
    }
    bool operator>(Book b){
        if(price>b.price){
         return true;
        }
        else{
            return false;
        }
    }
    friend void costlier_book(Book b1,Book b2);
    
};
int Book ::count=0;
void costlier_book(Book b1,Book b2){
    Book costlier =(b1>b2)?b1:b2;
    cout<<"Costlier book details:"<<endl;
    cout<<"ID is"<<costlier.book_id<<endl;
    cout<<"BOOK name is"<<costlier.book_name<<endl;
    cout<<"PRICE IS "<<costlier.price<<endl;
}
int main(){
    Book b1(10,"jb gupta",200);
    Book b2(12,"emaths",300);
    costlier_book(b1,b2);
    
    
    
}