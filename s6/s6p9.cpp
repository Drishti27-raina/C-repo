#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ifstream file("students.txt");

    if (!file)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    string line;
    int characters = 0;
    int words = 0;
    int lines = 0;

    while (getline(file, line))
    {
        lines++;

        characters = characters + line.length();

        stringstream ss(line);
        string word;

        while (ss >> word)
        {
            words++;
        }
    }

    file.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}