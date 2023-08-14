// Write a program which shows the use of scope resolution operator.
#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int rollNO;
    public:
        void setData();
        void getData();
};

void student::setData(){
    cout<<"Enter student name : ";
    cin>>name;
    cout<<"Enter roll no : ";
    cin>>rollNO;
}
void student::getData(){
    cout<<"Student name is : "<<name<<endl;
    cout<<"Student roll no is : "<<rollNO<<endl;
}

int main(){
    student s;
    s.setData();
    s.getData();
    return 0;
}