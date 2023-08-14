
// Constructor overloading.
#include <iostream>
using namespace std;
class complex
{
    int a, b;
public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(){
        a=0;
        b=0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};
int main()
{
    // complex c;   // No argument constructor
    // complex c(10,20);    //two argument constructor
    complex c(10);          //one argument constructor
    c.display();
    return 0;
}