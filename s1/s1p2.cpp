#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    bool prime=true;

    if (n <= 1) {
        cout << "Entered number cannot be prime." << endl;
    } else {
        int i;
        for (i = 2; i <n; i++) {
            if (n % i == 0) {
                
                prime=false;
                break;
            }
        }

        if (prime==true) {
            cout << "Entered number is a prime." << endl;
        } else {
            cout << "Entered number is not a prime." << endl;
        }
    }

    return 0;
}
