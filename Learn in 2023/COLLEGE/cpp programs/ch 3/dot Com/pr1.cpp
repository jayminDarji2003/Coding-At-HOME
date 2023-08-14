//Create a class vehicle which stores the vehicleno and chassisno as a member . Define a another class for scooter , which inherits the data members of the class vehicle and has data member for a storing wheels and company . Define another class for which inherits the data member of the class vehicle and has a data member for storing price and company . Display the data from derived class . Use virtual function.

#include<iostream>
using namespace std;

class Vehicle{
    protected:
        int vehicleNo,chassisNO;
    public:
        void setData(){
            cout<<"Enter vehicle no : ";
            cin>>vehicleNo;
            cout<<"Enter chassis no : ";
            cin>>chassisNO;
        }
        virtual void disData(){
            cout<<"Vehicle no is : "<<vehicleNo<<endl;
            cout<<"Chassis no is : "<<chassisNO<<endl;
        }
};
class Scooter:public Vehicle{
    private:
        int wheels;
        string company;
    public:
        void setData2(){
            setData();
            cout<<"Enter wheels : ";
            cin>>wheels;
            cout<<"Enter company name : ";
            cin>>company;
        }
        void disData(){
            cout<<"Vehicle no is : "<<vehicleNo<<endl;
            cout<<"Chassis no is : "<<chassisNO<<endl;
            cout<<"Wheels = "<<wheels<<endl;
            cout<<"Company name = "<<company<<endl;
        }
};
class veh:public Vehicle{
    protected:
        int price;
        string company;
    public:
        void setData3(){
            setData();
            cout<<"Enter price : ";
            cin>>price;
            cout<<"Enter company name : ";
            cin>>company;
        }
        void disData(){
            cout<<"Vehicle no is : "<<vehicleNo<<endl;
            cout<<"Chassis no is : "<<chassisNO<<endl;
            cout<<"Price = "<<price<<endl;
            cout<<"Company name = "<<company<<endl;
        }
};

int main(){
    Vehicle *v1;
    Scooter s;
    veh v2;

    v1=&s;
    s.setData2();
    v1->disData();

    v1=&v2;
    v2.setData3();
    v1->disData();


    return 0;
}