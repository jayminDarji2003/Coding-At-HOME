// Create a class coord,which has x and y coordinates as it data mamber.Overload ++ and -- operator for the coord class.Create for both postfix and prefix.

#include <iostream>
using namespace std;

class coord
{
private:
    int x, y;

public:
    void getData();
    void disData();

    coord operator++(int)
    {
        x++;
        y++;
    }
    coord operator++()
    {
        ++x;
        ++y;
    }
    coord operator--(int)
    {
        x--;
        y--;
    }
    coord operator--()
    {
        --x;
        --y;
    }
};
void coord::getData()
{
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;
}
void coord::disData()
{
    cout << "The value of x is : " << x << endl;
    cout << "The value of y is : " << y << endl;
}

int main()
{
    coord c1;

    c1.getData();

    cout << "--For Post increment--" << endl;
    c1++;
    c1.disData();

    cout << "--For pre increment--"<< endl;
    ++c1;
    c1.disData();

    cout << "--For Post decrement--" << endl;
    c1--;
    c1.disData();

    cout << "--For Pre decrement--" << endl;
    --c1;
    c1.disData();

    return 0;
}