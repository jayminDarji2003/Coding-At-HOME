#include<iostream>
using namespace std;
class paisa;
class rupee
{
int r;
public:
rupee(){}
void set(){cout<<"ENTER THE RUPEES :";cin>>r;}
void disp(){cout<<"CONVERT TO RUPEES:"<<r;}
int get_r(){return r;}
rupee(paisa p1);
};
class paisa
{
int p;
public:
paisa(){}
paisa(rupee r1)
{
p=r1.get_r()*100;
}
void set(){cout<<"\nENTER THE PAISA:";cin>>p;}
void disp(){cout<<"CONVERT TO PAISA:"<<p;}
int get_p(){return p;}
};
rupee::rupee(paisa p1)
{
r=p1.get_p()/100;
}
int main()
{
rupee r1;
paisa p1;
r1.set();
p1=r1;
p1.disp();
p1.set();
r1=p1;
r1.disp();
}