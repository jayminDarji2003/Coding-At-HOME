// Create a class time with member data hour and minute.Overload ++unary oprator for class time for increment and -- unary operator for class decrement.

#include <iostream>
using namespace std;

class Time
{
private:
    int hour, min;

public:
    void setData();
    void disData();

    void operator ++(){
        hour++;
        min++;
    }
    void operator --(){
        hour--;
        min--;
    }
};

void Time::setData()
{
    cout << "Enter hour : ";
    cin >> hour;
    cout << "Enter minute : ";
    cin >> min;
}
void Time::disData()
{
    cout << "Hour is : " << hour << endl;
    cout << "Minute is : " << min << endl;
}


int main()
{
    Time t;

    t.setData();

    ++t;
    t.disData();

    --t;
    t.disData();
    return 0;
}