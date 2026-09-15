#include<iostream>
using namespace std;
class Interest{
    int principal;
    int rate;
    int interest;
    public:
    Interest(int p,int r,int i){
        principal=p;
        rate=r;
        interest=i;
    }
    inline void calculate_si(){
        cout<<"SI is"<<(principal*rate*interest)/100;
    }
    
};
int main(){
    Interest I (20,10,8);
    I.calculate_si();
}