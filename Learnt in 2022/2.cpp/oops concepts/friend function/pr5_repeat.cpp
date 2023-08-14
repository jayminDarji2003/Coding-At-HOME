#include <iostream>
using namespace std;
class b;
class a
{
private:
    int x;

public:
    void setData(int val)
    {
        x = val;
    }
    void display()
    {
        cout << "The value of a is = " << x<<endl;
    }
    friend void swap(a &, b &);
};

class b
{
private:
    int y;

public:
    void setData(int val)
    {
        y = val;
    }
    void display()
    {
        cout << "The value of a is = " << y;
    }

    friend void swap(a &, b &);
};

void swap(a &x, b &y)
{
    int temp = x.x;
    x.x = y.y;
    y.y = temp;
}

int main()
{
    a x;
    b y;
    x.setData(10);
    y.setData(20);
    swap(x , y);
    x.display();
    y.display();
    return 0;
}