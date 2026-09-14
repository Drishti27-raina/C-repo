#include <iostream>
using namespace std;

class Employee
{
    string name;
    int salary;

public:

    void input()
    {
        cout << "Enter name of employee: " << endl;
        cin >> name;

        cout << "Enter salary of employee: " << endl;
        cin >> salary;
    }

    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Salary is: " << salary << endl;
    }

    friend Employee highestSalary(Employee emp[], int n);
    friend Employee reviseSalary(Employee emp);
};


Employee highestSalary(Employee emp[], int n)
{
    Employee highest = emp[0];

    for (int i = 1; i < n; i++)
    {
        if (emp[i].salary > highest.salary)
        {
            highest = emp[i];
        }
    }

    return highest;
}


Employee reviseSalary(Employee emp)
{
    emp.salary = emp.salary + (emp.salary * 10 / 100);

    return emp;
}


int main()
{
    Employee emp[3];

    cout << "Enter details of all employees" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].input();
    }

    Employee high = highestSalary(emp, 3);

    cout << "\nEmployee with highest salary" << endl;
    high.display();

    Employee increment = reviseSalary(high);

    cout << "\nSalary after revising" << endl;
    increment.display();

    return 0;
}