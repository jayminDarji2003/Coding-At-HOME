// Using a friend function.Find the average of three numbers from three different classes.

#include <iostream>
using namespace std;

class Second;
class Third;
class First
{
private:
    int no1;

public:
    First()
    {
        getData();
    }
    void getData()
    {
        cout << "Enter no1 : ";
        cin >> no1;
    }

    friend void average(First &, Second &, Third &);
};
class Second
{
private:
    int no2;

public:
    Second()
    {
        getData();
    }
    void getData()
    {
        cout << "Enter no2 : ";
        cin >> no2;
    }

    friend void average(First &, Second &, Third &);
};
class Third
{
private:
    int no3;

public:
    Third()
    {
        getData();
    }
    void getData()
    {
        cout << "Enter no3 : ";
        cin >> no3;
    }

    friend void average(First &, Second &, Third &);
};

void average(First &f, Second &s, Third &t)
{
    int avg = (f.no1 + s.no2 + t.no3)/3;
    cout<<"Average of three numbers is : "<<avg;
}

int main()
{
    First f;
    Second s;
    Third t;
    average(f,s,t);
    return 0;
}