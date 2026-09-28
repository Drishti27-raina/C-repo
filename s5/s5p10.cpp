#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

// Teacher class
class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(string n, int a, string s)
        : Person(n, a)
    {
        subject = s;
    }

    void display()
    {
        cout << "Teacher Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Research Scholar class
class ResearchScholar : public Person
{
private:
    string topic;

public:
    ResearchScholar(string n, int a, string t)
        : Person(n, a)
    {
        topic = t;
    }

    void display()
    {
        cout << "Research Scholar Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Research Topic: " << topic << endl;
    }
};

// Template class
template <class T>
class RecordManager
{
private:
    T record;

public:
    RecordManager(T r):record(r)
    {
        
    }

    void displayRecord()
    {
        record.display();
    }
};

int main()
{
    Teacher t("Rahul", 35, "Computer Science");

    ResearchScholar r("Priya", 25, "Artificial Intelligence");

    RecordManager<Teacher> teacherRecord(t);

    RecordManager<ResearchScholar> scholarRecord(r);

    teacherRecord.displayRecord();

    cout << "------------------------" << endl;

    scholarRecord.displayRecord();

    return 0;
}