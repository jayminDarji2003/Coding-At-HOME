// Create a class time with member data hour and  minute. Overload ++unary operator for class time for increment and -- unary operator for decrement in time object value

#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;

public:
    void setTime()
    {
        cout << "Enter hour : ";
        cin >> hour;
        cout << "Enter minute : ";
        cin >> minute;
    }
    void printTime()
    {
        cout << hour << " : " << minute;
    }

    void operator++() // Prefix
    {
        minute = minute + 1;
        if (minute >= 60)
        {
            minute = minute - 60;
            hour = hour + 1;
        }
        hour = hour + 1;
    }
    void operator++(int)
    {
        minute = minute + 1;
        if (minute >= 60)
        {
            minute = minute - 60;
            hour = hour + 1;
        }
        hour = hour + 1;
    }

    void operator--()
    {
        hour = hour - 1;
        if (minute > 0)
        {
            minute = minute - 1;
        }
        else
        {
            hour = hour - 1;
            minute = 59;
        }
    }
    void operator--(int)
    {
        hour = hour - 1;
        if (minute > 0)
        {
            minute = minute - 1;
        }
        else
        {
            hour = hour - 1;
            minute = 59;
        }
    }
};

int main()
{
    Time t1,t2;
    cout<<"\n Increment operator \n";

    t1.setTime();
    t1++;
    t1.printTime();
    ++t1;
    t1.printTime();

    cout<<"\n Decrement operator \n ";
    t2.setTime();
    t2--;
    t2.printTime();
    --t2;
    t2.printTime();


    return 0;
}