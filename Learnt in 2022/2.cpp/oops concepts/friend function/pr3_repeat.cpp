#include <iostream>
using namespace std;

class temp2;

class temp1
{
    int a;

public:
    void set_data()
    {
        cout << "Enter first value :";
        cin >> a;
    }
    friend void max(temp1, temp2);
};

class temp2
{
    int b;
public:
    void set_data()
    {
        cout << "Enter second value :";
        cin >> b;
    }
    friend void max(temp1, temp2);
};

void max(temp1 t1,temp2 t2){
    if(t1.a > t2.b){
        cout<<"The max number is = "<<t1.a;
    }
    else{
        cout<<"The max number is = "<<t2.b;
    }
}

int main()
{
    temp1 t1;
    t1.set_data();
    temp2 t2;
    t2.set_data();
    max(t1,t2);
    return 0;
}