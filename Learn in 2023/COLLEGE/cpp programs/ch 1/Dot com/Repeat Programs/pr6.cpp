#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNO;

public:
    void getData();
    void disData();
};
void Student::getData()
{
    cout << "Enter student name : ";
    cin >> name;
    cout << "Enter rollNO : ";
    cin >> rollNO;
}
void Student::disData()
{
    cout << "The name of student is : " << name << endl;
    cout << "The roll no is : " << rollNO << endl;
}

int main()
{
    Student s;
    s.getData();
    s.disData();

    return 0;
}