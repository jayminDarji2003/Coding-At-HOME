// Create a class distance which contains feet and inch as data member. Overhead == and < operator for the same class. Create necessary functions and constructors too.

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        feet = inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    void operator==(Distance d11)
    {
        int d1 = (feet * 12) + inch;
        int d2 = (d11.feet * 12) + d11.inch;
        if (d1 == d2)
        {
            cout << "Both distance are same";
        }
        else
        {
            cout << "Both distance are not same";
        }
    }
    int operator<(Distance d11)
    {
        int d1 = (feet * 12) + inch;
        int d2 = (d11.feet * 12) + d11.inch;
            if (d1<d2)
            {
                return (1);
            }
            else{
                return (0);
            }
            
    }
};

int main()
{
    Distance d1(1,2),d2(2,4);
    cout<<"\n == operator"<<endl;
        d1==d2;
    cout<<"\n < operator"<<endl;

        if (d1<d2)
        {
            cout<<" d1 is less";
        }
        else{
            cout<<" d2 is less";
        }
        
    return 0;
}