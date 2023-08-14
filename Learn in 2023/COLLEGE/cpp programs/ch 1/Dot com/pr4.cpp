// Question is too long so i don't wtite
#include<iostream>
using namespace std;

class Student{
    private:
        int rollNO;
        string name;
        int sci,math,eng,c,cpp;
    public:
        void getData(){
            cout<<"Enter roll nO : ";
            cin>>rollNO;
            cout<<"Enter name : ";
            cin>>name;

            cout<<"Enter science marks : ";
            cin>>sci;
            cout<<"Enter maths marks : ";
            cin>>math;
            cout<<"Enter english marks : ";
            cin>>eng;
            cout<<"Enter c language marks : ";
            cin>>c;
            cout<<"Enter cpp language marks : ";
            cin>>cpp;
        }
        void disData(){
            cout<<"\nStudent roll no is : "<<rollNO<<endl;
            cout<<"Student name is : "<<name<<endl;
            cout<<"Science marks is : "<<sci<<endl;
            cout<<"Maths marks is : "<<math<<endl;
            cout<<"English marks is : "<<eng<<endl;
            cout<<"C marks is : "<<c<<endl;
            cout<<"Cpp marks is : "<<cpp<<endl;
        }
        void totalMarks(){
            int total;
            total=sci+math+eng+c+cpp;
            cout<<"Total marks is : "<<total<<endl;
        }
};

int main(){
    Student s;
    s.getData();
    s.disData();
    s.totalMarks();
    return 0;
}