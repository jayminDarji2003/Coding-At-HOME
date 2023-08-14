#include <iostream>
using namespace std;

class array
{
private:
    int marks[5];

public:
    void setData();
    void getData();
};
void array::setData()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks : ";
        cin >> marks[i];
    }
}
void array::getData()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "The marks is : " << marks[i] << endl;
    }
}

int main()
{
    array arr;
    arr.setData();
    arr.getData();
    return 0;
}