#include <iostream>
using namespace std;
class Marks{
    int arr[5];
    int maxMarks;
    public:
    Marks(){
         cout<<"enter marks of 5 students:"<<endl;
    for(int i=0;i<5;i++){
       
        cin>>arr[i];
    }
    }
    void max(){
        maxMarks=arr[0];
        for(int i=0;i<5;i++){
            if(arr[i]>maxMarks){
                maxMarks=arr[i];
                
            }
        }
        cout<<"max marks are:"<<maxMarks<<endl;
    }
};
int main(){
    Marks m;
    m.max();
}