#include <iostream>
using namespace std;

class A
{
public:
    int x;
    void getX();
    void disX();
};
class B
{
public:
    int y;
    void getY();
    void disY();
};

void A::getX()
{
    cout << "Enter the value of x : ";
    cin >> x;
}
void A::disX()
{
    cout << "The value of x is : " << x << endl;
}
void B::getY()
{
    cout << "Enter the value of y : ";
    cin >> y;
}
void B::disY()
{
    cout << "The value of y is : " << y << endl;
}

int main()
{
    A _a;
    B _b;
    int temp;

    _a.getX();
    _b.getY();

    cout<<"--------The value before swapping---------"<<endl;
    _a.disX();
    _b.disY();

    temp = _a.x;
    _a.x = _b.y;
    _b.y=temp;

    cout<<"--------The value after swapping---------"<<endl;
    _a.disX();
    _b.disY();

    return 0;
}