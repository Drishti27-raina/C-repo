#include<iostream>
using namespace std;
class Result{
    int rollno;
    int marks[5];
    public:
    void input(){
        cout<<"enter rollno"<<endl;
        cin>>rollno;
        cout<<"enter marks of 5 subjects"<<endl;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    int total(){
        int sum=0;
        for(int i=0;i<5;i++){
        sum=sum+marks[i];}
        return sum;
    }
    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total: " << total() << endl;
    }
    bool compare(Result r)
    {
        return total() > r.total();
    }
    friend Result topper(Result r1, Result r2, Result r3);

    friend Result grace(Result r);
};
Result topper(Result r1, Result r2, Result r3)
{
    Result top = r1;
if (r2.total() > top.total())
    {
        top = r2;
    }
if (r3.total() > top.total())
    {
        top = r3;
    }
 return top;
}
Result grace(Result r)
{
    int remainingGrace = 20;

    for (int i = 0; i < 5; i++)
    {
        int required = 40 - r.marks[i];

        // Give maximum 5 marks per subject
        if (required > 0 && required <= 5 && remainingGrace > 0)
        {
            int give = required;

            if (give > remainingGrace)
            {
                give = remainingGrace;
            }

            r.marks[i] = r.marks[i] + give;
            remainingGrace = remainingGrace - give;
        }
    }

    return r;
}


int main()
{
    Result r1, r2, r3;

    cout << "Enter details of Student 1:" << endl;
    r1.input();

    cout << "\nEnter details of Student 2:" << endl;
    r2.input();

    cout << "\nEnter details of Student 3:" << endl;
    r3.input();
    if (r1.compare(r2))
    {
        cout << "\nStudent 1 has more marks than Student 2." << endl;
    }
    else
    {
        cout << "\nStudent 2 has more marks than Student 1." << endl;
    }
    Result top = topper(r1, r2, r3);

    cout << "\nTOPPER:" << endl;
    top.display();
    Result revised = grace(top);
    cout << "\nAfter Applying Grace Marks:" << endl;
    revised.display();
    return 0;
}
