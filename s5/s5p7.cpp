#include<iostream>
using namespace std;
template <class T>
class Pair{
    T a,b;
    public:
    Pair(T a,T b ){
        this->a=a;
        this->b=b;
        
    }
    
   
 T maximum(){
        if (a>b){
            return a;
            
        }
        else{
            return b;
        }    }

 T minimum(){
        if (a<b){
            return a;
            
        }
        else{
            return b;
        }}
        
void display(){
    cout<<"First value is:"<<a<<endl;
    cout<<"second value is"<<b<<endl;
    cout<<"maximum value is"<<maximum()<<endl;
    cout<<"minimum value is "<<minimum()<<endl;
} 
};
int main(){
    Pair <int> p1(3,5);
    p1.display();
    cout<<"----------------"<<endl;
    Pair <float> p2(5.6,7.8);
    p2.display();
}