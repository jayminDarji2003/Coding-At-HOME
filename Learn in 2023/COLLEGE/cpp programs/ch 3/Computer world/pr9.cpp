// Create one class Rupees, which has one member data to store amount in rupee and create another class called Paise which has member data to store amount in paise. write program to convert one amount to another amount with use of type conversion.

#include <iostream>
using namespace std;

class Rupees
{
private:
    int r;

public:
    Rupees()
    {
        r = 10;
    }
    operator Paise = ()
    {
        Paise t;
        t.setData(r * 100);
        return (t);
    }
};
class Paise
{
private:
    int p;

public:
    void setData(int a)
    {
        p = a;
    }
    void disData()
    {
        cout << "Paise is : " << p << endl;
    }
};

int main()
{
    Rupees r1;
    Paise p1;
    p1 = r1;
    p1.disData();
    return 0;
}