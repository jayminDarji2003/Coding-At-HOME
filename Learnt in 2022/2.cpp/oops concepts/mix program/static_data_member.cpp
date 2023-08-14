
    // static data member in the class.

#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void displayData(void)
    {
        cout << "The id of the employee is : " << id << " and the no of employee is " << count << endl;
    }
};

int employee ::count; // Dufualt value id 0.

int main()
{
    employee jay, het, bhargav;

    jay.setData();
    jay.displayData();

    het.setData();
    het.displayData();

    bhargav.setData();
    bhargav.displayData();

    return 0;
}