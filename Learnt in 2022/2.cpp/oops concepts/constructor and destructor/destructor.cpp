
    // Destructor concepts.
    //Destructor:- 1.never take argument
                    // 2.not return type
#include<iostream>
using namespace std;
int count=0;
class num{
    public:
        num(){
            ++count;
            cout<<"This is the time when copy constructor called for object no = "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when my destructor called for object no"<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first objects"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}