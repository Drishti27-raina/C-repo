#include<iostream>
using namespace std;
class text{
    string str;
    int count=0;
    
    public:
    text(string s){
        cout<<"enter a string:"<<endl;
        str=s;
        cout<<"your string is"<<s<<endl;
        
    }
    void length(){
        while(str[count]!='\0'){
            count++;
        }
        cout<<"your lengh is "<<count;
    }
};
int main(){
    text t("DRISHTI");
    t.length();
}