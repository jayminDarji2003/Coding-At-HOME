// Define a class coOrd, which has x and y coordinates as itsdata members.Overload ++ and -operators for the coord class.Create both its prefix and postfix forms.

#include <iostream>
using namespace std;

class coOrd
{
private:
    int x, y;

public:
    void setData()
    {
        cout << "Enter x and y ";
        cin >> x >> y;
    }
    void disData()
    {
        cout << "The value of x is : " << x<<endl;
        cout << "The value of y is : " << y<<endl;
    }
    // prefix
    void operator++()
    {
        x = x + 1;
        y = y + 1;
    }
    // post fix
    void operator++(int)
    {
        x = x + 1;
        y = y + 1;
    }
    void operator-()
    {
        x = -x;
        y = -y;
    }
};

int main()
{
    coOrd c1,c2;
    cout<<endl<<"Increment operator"<<endl;
    c1.setData();
    c1++;
    c1.disData();
    ++c1;
    c1.disData();
    cout<<endl<<"Decrement operator"<<endl;
    c2.setData();
    -c2;
    c2.disData();
    return 0;
}