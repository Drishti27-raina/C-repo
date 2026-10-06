#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source("students.txt");
    ofstream destination("destination.txt");

    if (!source || !destination)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    char ch;

    // Copy data
    while (source.get(ch))
    {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    // Open destination file for reading
    ifstream check("destination.txt");

    cout << "\nData in destination.txt:\n";

    while (check.get(ch))
    {
        cout << ch;
    }

    check.close();

    return 0;
}