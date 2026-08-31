#include <iostream>
using namespace std;

int fibnocci(int n){
        if (n==0||n==1){
            return n; //becuse when 0 or 1 answer is 0 or 1
        }
        return (fibnocci(n-1)+fibnocci(n-2));
}
int main(){int n;
    cout <<"enter number of terms:"<<endl;
    cin>>n;
    cout<<"fibnocci series is:"<<endl;
    for(int i=0;i<n;i++){
        cout<< fibnocci(i)<<" ";
    }
    
    return 0;
}