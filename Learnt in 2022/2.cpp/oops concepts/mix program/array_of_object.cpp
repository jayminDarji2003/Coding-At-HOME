
// Array of object

#include <iostream>
using namespace std;

class Employee
{
private:
    int Id;
    int salary;
public:
    void setData()
    {
        cout << "Enter Id of employee : ";
        cin >> Id;
        cout << "Enter Id of salary : ";
        cin >> salary;
    }
    void displayData()
    {
        cout << "The Id of the employee is: " << Id << endl;
        cout << "The salary of the employee is: " << salary << endl;
    }
};

int main()
{

    // We can make like this.
    // employee jaymin,devang,deep;
    // jaymin.setData();
    // jaymin.displayData();

    // Let's make an array.
    Employee fq[5];
    for (int i = 0; i < 5; i++)
    {
        fq[i].setData();
    }

    for (int i = 0; i < 5; i++)
    {
        fq[i].displayData();
    }
    return 0;
}