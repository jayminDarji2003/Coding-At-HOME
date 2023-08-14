#include <iostream>
using namespace std;

union student
{
    int EnNo;
    char name[10];
    int total_marks;
};

int main()
{
    student stu;
        //We can use one variable at a time..
        cout << "Enter student name: ";
        cin >> stu.name;
        cout << "The name of the student is :" << stu.name << endl;
    
    return 0;
}