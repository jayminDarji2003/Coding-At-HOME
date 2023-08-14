// Create a time class with members hour and min as members.Overload ++ and --operator.

#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int min;

public:
    Time()
    {
        hour = min = 0;
    }
    Time(int h, int m)
    {
        hour = h;
        min = m;
    }
    void getTime()
    {
        cout << "\nEnter hour : ";
        cin >> hour;
        cout << "Enter min : ";
        cin >> min;
        cout<<"\n";
    }
    void showTime()
    {
        cout << "Hour is : " << hour;
        cout << "\t Min is : " << min << endl;
    }

    void operator++() // Prefix
    {
        ++min; // 34+1=35
        if (min >= 60)
        {
            ++hour;
            min = min - 60;
        } 
    }
    void operator++(int v)
    {
        min++;
        if (min >= 60)
        {
            ++hour;
            min = min - 60;
        }
    }
    void operator --(){
        --min;
        if (min<=0)
        {
            --hour;
            min=min+60;
        }
    }
    void operator --(int v){
        min--;
        if (min<=0)
        {
            hour--;
            min=min+60;
        }
        
    }
};

int main()
{
    Time t1(3,19);
    ++t1;
    t1.showTime();

    Time t2;
    t2.getTime();
    t2--;
    t2.showTime();
    return 0;
}