//Write a base class named Employee and derive classes Male employee and Female Employee from it . Every employee has an id , name and a scale of salary . Make a function Compute Pay ( in hours ) to compute the weekly payment of every employee . A male employee is paid on the number of days and hours he works . The female employee gets paid the wages for 40 hours a week , no matter what the actual hours are . Test this program to calculate the pay of employee .
#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
    protected:
        int salary;
    public: 
        void getData(){
            cout<<"Enter employee id : ";
            cin>>id;
            cout<<"Enter employee  name : ";
            cin>>name;
            cout<<"Enter scale of salary : ";
            cin>>salary;
        }
        void disData(){
            cout<<"Employee id is : "<<id<<endl;
            cout<<"Employee name is : "<<name<<endl;
            cout<<"Employee scale of salary is : "<<salary<<endl;
        }
};

class Male:public Employee{
    private:
        int hour,day;
    public:
        void getMaleData(){
            cout<<"Enter hour : ";
            cin>>hour;
            cout<<"Enter day : ";
            cin>>day;
        }
        void pay(){
            salary=hour * day * salary;
        }
};  

class Female:public Employee{
    public:
        void pay(){
            salary=40 * salary;
        }
};

int main(){
    int choice;
    Male m;
    Female f;

    while (1)
    {
        cout<<endl<<"1.Male"<<endl;
        cout<<"2.Female"<<endl;
        cout<<"3.Exit"<<endl;

        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            m.getData();
            m.getMaleData();
            m.pay();
            m.disData();
            break;
        case 2:
            f.getData();
            f.pay();
            f.disData();
            break;
        case 3:
            exit(1);
            break;
        
        default:
            cout<<"Invalid choice";
            break;
        }
    }
    
    return 0;
}