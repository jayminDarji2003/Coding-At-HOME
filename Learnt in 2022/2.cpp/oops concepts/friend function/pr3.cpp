
// This is the program of friend class...
// A function friendly to two classes.
//  Ex..Demonstrate how friend function work as a bridge between the classes.

#include <iostream>
using namespace std;

class ABC; // forword declaration

class XYZ
{
    int x;

public:
    void set_data(int a)
    {
        x = a;
    }
    friend void max(XYZ, ABC);
};

class ABC
{
    int y;

public:
    void set_data(int b)
    {
        y = b;
    }
    friend void max(XYZ, ABC);
};

void max(XYZ x1,ABC a1){
    if(x1.x > a1.y){
        cout<<"The max number is="<<x1.x;
    }
    else{
        cout<<"The max number is="<<a1.y;
    }
}

int main()
{
    XYZ x1;
    ABC a1;
    x1.set_data(10);
    a1.set_data(20);
    max(x1,a1);
    return 0;
}