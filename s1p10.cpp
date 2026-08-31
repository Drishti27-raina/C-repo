#include <iostream>
using  namespace std;
int main(){
    int arr[]={1,2,3,4,5,9,0,7,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    int index=-1;
    bool found=false;
    
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            index=i;
            found=true;
            break;
            
        }
    }
    if(found==true)
    cout<<"element "<<target<<" foumd at index "<<index;
    else
    cout<<"element "<<target<< "not found";
    return 0;
    
}