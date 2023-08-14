// Create a class distance which contains feet and inch as data member. Overload == , < , > operator for same class.

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        cout <<endl<< "Enter feet : ";
        cin >> feet;
        cout << "Enter inch : ";
        cin >> inch;
    }
    int operator==(Distance d)
    {
        inch = (inch + (feet * 12));
        d.inch = (d.inch + (d.feet * 12));

        if (inch == d.inch)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator <(Distance d)
    {
        inch = (inch + (feet * 12));
        d.inch = (d.inch + (d.feet * 12));
        if (inch < d.inch)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator >(Distance d)
    {
        inch = (inch + (feet * 12));
        d.inch = (d.inch + (d.feet * 12));
        if (inch > d.inch)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Distance D1,D2;
    if(D1 == D2){
        cout<<"Both are same"<<endl;
    }
    else{
        cout<<"Both are not same"<<endl;
    }

    Distance D3,D4;
    if (D3 < D4)
    {   
        cout<<"D4 is max value"<<endl;
    }
    else{
        cout<<"D3 is max value"<<endl;
    }

    Distance D5,D6;
    if (D5 > D6)
    {   
        cout<<"D5 is max value"<<endl;
    }
    else{
        cout<<"D6 is max value"<<endl;
    }

    return 0;
}