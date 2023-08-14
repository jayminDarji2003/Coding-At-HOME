#include <iostream>
using namespace std;

class Student
{
private:
    int rollNO;
    string name;
    int marks[5];

public:
    void get();
    void dis();
    void total();
};

void Student::get()
{
    cout << "Enter the roll NO : ";
    cin >> rollNO;
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter marks for 5 subjects\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for sub " << i + 1 << " : ";
        cin >> marks[i];
    }
}
void Student::dis()
{
    cout << "Student name is : " << name << endl;
    cout << "The rollNO is : " << rollNO << endl;
    cout << "The marks are as follow\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "The marks is : " << marks[i]<<endl;
    }
}

void Student::total()
{
    int total=0;
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }
    cout<<"The total marks is : "<<total<<endl;
}

int main()
{

    Student s;
    s.get();
    s.dis();
    s.total();

    return 0;
}