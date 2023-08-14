// Create a class string with character array as a data member and write a program to  add two string with use of operator overloading.

#include<iostream>
#include<cstring>
using namespace std;

class String{
    private:
        char name[20];
    public:
        void getData(){
            cout<<"Enter name : ";
            cin>>name;
        }
        void disData(){
            cout<<"Name is : "<<name;
        }

        String operator +(String s1){
            String s3;
            strcpy(s3.name,name);
            strcat(s3.name,s1.name);
            return s3;
        }
};

int main(){
    String s,s1,s2;
    s.getData();
    s1.getData();
    s2=s + s1;
    s2.disData();
    return 0;
}