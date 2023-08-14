#include <iostream>
using namespace std;

struct employee
{
    int id, salary;
    char name[20];
};

int main()
{

    employee jay;

    cout << "Enter the id of jay: ";
    cin >> jay.id;
    cout << "Enter the name of jay: ";
    cin >> jay.name;
    cout << "Enter the salary of jay: ";
    cin >> jay.salary;

    cout << "The value is: " << jay.id << endl;
    cout << "The value is: " << jay.name << endl;
    cout << "The value is: " << jay.salary << endl;
    return 0;
}