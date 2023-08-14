
// Friend function.
/*
    1.Private data member can't access from the out side of the class.
    2.Non-member function can't have a wright to access the data of private.
    3.If we take a example of a two classes....
        class manager       class scientist
                income_taxt();          //use same function
            -->In the above case we have to make a friend function of these classes...The friend function don't have the member of that classes.

            ex..
                we have to write in both classes
                    friend int income_taxt(int);
*/

#include <iostream>
using namespace std;
class myClass
{
private:
    int a, b;
public:
    friend int sum(myClass x);
    void setData(int i, int j)
    {
        a = i;
        b = j;
    }
};

int sum(myClass x)
{
    return (x.a + x.b);
}

int main()
{
    myClass n;
    n.setData(3,4);
    cout<<"The sum of two number is: "<<sum(n);
    return 0;
}