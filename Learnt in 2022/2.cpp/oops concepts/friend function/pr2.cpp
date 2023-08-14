
        //This is the program of friend function..
        // Ex..Find the largest of two numbers using friend function.

#include<iostream>
using namespace std;

class Largest
{
    private:
        int a,b,m;
    public:
        void set_data();
        friend void find_max(Largest);
};
void Largest ::set_data(){
    cout<<"Enter the first No :";
    cin>>a;
    cout<<"Enter the second No :";
    cin>>b;
}

void find_max(Largest t){
    if(t.a > t.b){
        t.m=t.a;
    }
    else{
        t.m=t.b;
    }
    cout<<"Maximum number is="<<t.m;
}

int main(){
    Largest l;
    l.set_data();
    find_max(l);
    return 0;
}