#include<iostream>
using namespace std;

class Largest{
    private:
        int a,b;
    public:
        void set_data();
        friend void max_data(Largest);
};

void Largest::set_data(){
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
}

void max_data(Largest t){
    if(t.a > t.b){
        cout<<"The maximum number is="<<t.a;
    }
    else{
        cout<<"The maximum number is="<<t.b;
    }
}

int main(){
    Largest l;
    l.set_data();
    max_data(l);
    return 0;
}