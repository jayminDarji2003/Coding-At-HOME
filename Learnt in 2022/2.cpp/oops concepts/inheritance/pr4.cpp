// This is the example of multiple inheritance

#include <iostream>
using namespace std;

class student1
{
protected:
    int id;
    char name[10];

public:
    void set_data()
    {
        cout << "Enter the student id : ";
        cin >> id;
        cout << "Enter the student name : ";
        cin >> name;
    }
    void get_data()
    {
        cout << endl
             << "The id of the student is = " << id << endl;
        cout << "The name of the student is = " << name << endl;
    }
};

class student2
{
protected:
    int marks;

public:
    void set_marks()
    {
        cout << "Enter the student marks : ";
        cin >> marks;
    }
    void dis_marks()
    {
        cout << "The marks of the student is = " << marks << endl;
    }
};

class Derived : public student1, public student2
{

};

int
main()
{
    Derived d;
    d.set_data();
    d.set_marks();
    d.get_data();
    d.dis_marks();
    return 0;
}