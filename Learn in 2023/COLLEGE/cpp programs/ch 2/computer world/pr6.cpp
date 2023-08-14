// This is the program of the 6th of the computr world book
#include<iostream>
using namespace std;

class Employee{
    protected:
        int id,scal_of_salary;
        string name;
        double salary;
};

class Male:public Employee{
    private:
        int days,hours;
    public:
        void getData();
        void putData();
        void computePay();
};
void Male::getData(){
    char choice;

    cout<<"Enter employee ID : ";
    cin>>id;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"press D for days or H for hours to calculate salary : ";
    cin>>choice;

    if (choice=='D' || choice=='d')
    {
        cout<<"Enter days :";
        cin>>days;
        hours=0;
    }
    else{
        cout<<"Enter hours";
        cin>>hours;
        days=0;
    }
}

void Male::computePay(){
    if (hours==0)
    {
        cout<<"Enter scale of days : ";
        cin>>scal_of_salary;
        salary= (days) * scal_of_salary;
    }
    else{
        cout<<"Enter scale of hours ";
        cin>>scal_of_salary;
        salary=(hours)*scal_of_salary;
    }
}

void Male::putData(){
    cout<<endl<<"Employee id is : "<<id<<endl;
    cout<<"Employee name is : "<<name<<endl;
    cout<<"Employee days is : "<<days<<endl;
    cout<<"Employee hours is : "<<hours<<endl;
    if (salary != 0)
    {
        cout<<"salary : "<<salary<<endl;
    }
}

class Female:public Employee{
    public:
        void getData();
        void putData();
        void computePay();
};
void Female::getData(){
    cout<<endl<<"Enter Employee id : ";
    cin>>id;
    cout<<"Enter name : ";
    cin>>name;
}
void Female::putData(){
    cout<<endl<<"Employee id is : "<<id<<endl;
    cout<<"Employee name is : "<<name<<endl;
    cout<<"Employee salary is : "<<salary<<endl;
}
void Female::computePay(){
    cout<<"Enter scale of salary of 40 hours : ";
    cin>>scal_of_salary;
    salary=40*scal_of_salary;
}

int main(){
    Male m1;
    Female f1;

    m1.getData();
    // m1.putData();
    m1.computePay();
    m1.putData();

    f1.getData();
    // f1.putData();
    f1.computePay();
    f1.putData();
    return 0;
}