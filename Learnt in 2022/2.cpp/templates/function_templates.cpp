/* We can create a function template that can be used to create a family of function with different argument type. 

    syntax:-
    template<class T>
    teturn_type function_name(argument of type T){
        //function body
    }

*/

#include<iostream>
using namespace std;

template<class t1>
double avg(t1 val1,t1 val2){
    double r;
    r=(val1+val2)/2;
    return r;
}

int main(){
    int n1=10,n2=20;
    float f1=22.5f,f2=27.4f;

    double r1=avg(n1,n2);
    double r2=avg(f1,f2);

    cout<<"The average of 2 integer is : "<<r1<<endl;
    cout<<"The average of 2 float is : "<<r2<<endl;

    return 0;
}
