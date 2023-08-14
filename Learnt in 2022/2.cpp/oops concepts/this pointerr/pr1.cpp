#include <iostream>
using namespace std;

class A
{
    int a;

public: 
        // we can return object of this.
    // A & setData(int a)
    // {
    //     this->a = a;
    //     return *this;
    // }

        // simple this example
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(18);
    a.getData();
    return 0;
}