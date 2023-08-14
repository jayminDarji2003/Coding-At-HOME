
// Copy constructor in cpp.

#include <iostream>
using namespace std;

class Number
{
private:
    int a;
public:
    Number() { a=0; }    //defualt constructor

    Number(int num) //one argument constructor
    {
        a = num;
    }

    Number(Number &obj) //copy constructor
    {   cout<<"copy constructor called !!!!"<<endl;
        a =obj.a;
    }

    void display()
    {
        cout << "The number for this object is : " << a << endl;
    }
};

int main()
{
    Number x(4), y, z,z2;
    // x=Number(4);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();

    z2=z;   //not calling copy constructor

    Number z3=z;    //copy constructor called.
    z3.display();

    return 0;
} 