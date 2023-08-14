// Write a program to create class template for "array" class.

#include<iostream>
using namespace std;
template<class t1,class t2>

class Array{
    private:
        t1 arr[5],i,n;
        t2 name[5];
    public:
        void get(){
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter limit : ";
            cin>>n;

            for ( i = 0; i < n; i++)
            {
                cout<<"Enter no : ";
                cin>>arr[i];
            }
        }
        void dis(){
            cout<<"Name is : "<<name<<endl;
            for ( i = 0; i < n; i++)
            {
                cout<<"No is : "<<arr[i]<<endl;
            }
            
        }
};

int main(){
    int i;
    Array<int,char>a;
    a.get();
    a.dis();

    Array<int,char>a1;
    a1.get();
    a1.dis();
    return 0;
}