#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int roll, marks;
    string name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    ofstream file("students.txt");

    if (!file)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    file << roll << " " << name << " " << marks << endl;

    file.close();

    cout << "Student record written successfully." << endl;

    return 0;
}