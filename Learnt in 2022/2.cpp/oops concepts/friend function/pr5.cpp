
    // Swap two value using friend function.

#include <iostream>
using namespace std;

class c2;   //forword declaration

class c1
{
private:
    int val1;
public:
    void indata()
    {
        cout<<"Enter the value of a = ";
        cin>>val1;
    }
    void display(void)
    {
        cout <<"The value of a is = "<< val1<< endl;
    }
    friend void swap(c1 &,c2 &);
};

class c2
{
private:
    int val2;
public:
    void indata()
    {
        cout<<"Enter the value of b = ";
        cin>>val2;
    }
    void display(void)
    {
        cout <<"The value of b is = "<<val2 << endl;
    }
    friend void swap(c1 &,c2 &);
};

void swap(c1 &x,c2 &y){
    int temp = x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main()
{
    c1 x;
    c2 y;
    // x.indata(11);
    // y.indata(13);
    x.indata();
    y.indata();
    swap(x,y);
    x.display();
    y.display();
    return 0;
}