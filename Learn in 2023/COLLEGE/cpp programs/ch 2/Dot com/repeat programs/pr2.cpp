#include <iostream>
using namespace std;

class no2;
class no3;

class no1
{
private:
    int no;
public:
    void set1(){
        cout<<"Enter the value of no1 : ";
        cin>>no;
    }
    void dis1(){
        cout<<"The value of no1 is : "<<no<<endl;
    }

    friend void average(no1 &,no2 &,no3 &);
};
class no2
{
private:
    int no;
public:
    void set2(){
        cout<<"Enter the value of no2 : ";
        cin>>no;
    }
    void dis2(){
        cout<<"The value of no2 is : "<<no<<endl;
    }

    friend void average(no1 &,no2 &,no3 &);
};
class no3
{
private:
    int no;
public:
    void set3(){
        cout<<"Enter the value of no3 : ";
        cin>>no;
    }
    void dis3(){
        cout<<"The value of no3 is : "<<no<<endl;
    }

    friend void average(no1 &,no2 &,no3 &);
};

void average(no1 &obj1,no2 &obj2,no3 &obj3){
    cout<<"The average of three no is : "<<(obj1.no + obj2.no + obj3.no)/3<<endl;
}
int main()
{
    no1 obj1;
    no2 obj2;
    no3 obj3;

    obj1.set1();
    obj2.set2();
    obj3.set3();

    obj1.dis1();
    obj2.dis2();
    obj3.dis3();

    average(obj1,obj2,obj3);

    return 0;
}