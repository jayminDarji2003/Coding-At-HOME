// Create a class String with one data member of type char *,which store String.Include defualt,parameterized and copy constructor to initialize the data member.

#include<iostream>
#include<cString>
using namespace std;

class String{
    private:
        char n[10];
    public:
        String(){
            cout<<"Enter name : ";
            cin>>n;
            cout<<"Defualt constuctor called"<<endl;
        }
        String(char *as){
            strcpy(n,as);
            cout<<"Name is : "<<n<<endl;
        }
        String(String &s){
            strcpy(n,s.n);
            cout<<"Copy constructor called : "<<n<<endl;
        }
};

int main(){
    String s;
    String s1("Hetvi");
    String s2(s);
    return 0;
}