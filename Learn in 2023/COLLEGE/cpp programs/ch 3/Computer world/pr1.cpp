// This is the first program of the practical
//In this program we got some mistake so please correct it

#include <iostream>
using namespace std;

class Vehicle
{
private:
    int vehicle_no;
    int chassis_no;

public:
    void setData(int v_no, int ch_no)
    {
        vehicle_no = v_no;
        chassis_no = ch_no;
    }
    void getData()
    {
        cout << "The vehicle no is = " << vehicle_no << endl;
        cout << "The chassis no is = " << chassis_no << endl;
    }
};

class Scooter : public Vehicle
{
private:
    int wheels;
    char company[10];

public:
    void set_Data(int wl)
    {
        wheels = wl;
        cout << "Enter the company name : ";
        cin >> company;
    }
    void get_data()
    {
        cout << "No of wheels are : " << wheels << endl;
        cout << "Company name is : " << company << endl;
    }
};

class car : public Vehicle
{
private:
    int price;
    char company[10];

public:
    void set_Data()
    {
        cout << "Enter the price : ";
        cin >> price;
        cout << "Enter the company name : ";
        cin >> company;
    }
    void get_Data()
    {
        cout << "The price is : " << price << endl;
        cout << "The company name is : " << company << endl;
    }
};
int main()
{
    Vehicle *p;
    Scooter s1, *p1;
    car c1, *p2;
    p = &s1;
    p1 = &s1;
    p->setData(30, 40);
    p->getData();

    // p1->get_data(4);
    p1->get_data();

    p = &c1;
    p2=&c1;
    // p->setData();
    p->getData();
    p2->set_Data();
    p2->get_Data();
    return 0;
}