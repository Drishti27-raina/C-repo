#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter array size"<<endl;
    cin >> n;

    int arr[n];
    cout<<"enter array elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newArr[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        for (int j = 0; j < k; j++) {
            if (arr[i] == newArr[j]) {
            
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            newArr[k] = arr[i];
            k++;
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << newArr[i] << " ";
    }

    return 0;
}