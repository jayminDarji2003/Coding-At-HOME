// Create Calendar class with day , month and year as data members . Include default and parameterized constructors to initialize a Calendar object with a valid date value . Define a function AddDays to add days to the Calendar object . Define a display function to show data in " dd / mm / yyyy " format .

#include<iostream>
using namespace std;

// int flag;

class Calender
{
private:
    int day,month, year;
public:
    Calender(){}
    Calender(int d,int m,int y){
        day=d;
        month=m;
        year=y;
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

    void add(int a){
        int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        cout<<"Add days : "<<a<<endl;
        day=day+a;

        while (day>months[month-1])
        {
            if(year % 4 == 0 && month == 2){
                if(day>29){
                    day=day-29;
                }
                else{
                    day=day-months[month-1];
                    month++;
                }
                if (month>12)
                {
                    month=1;
                    year++;
                }
            }
        }
    }

    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

   
};

int main(){
    Calender d(01,01,2000);
    d.add(366);
    d.display();

    return 0;
}