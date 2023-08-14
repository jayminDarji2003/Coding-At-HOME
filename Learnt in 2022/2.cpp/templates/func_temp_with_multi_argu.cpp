/* Function template with multiple arguments(parameters)

    syntax:-
    template<class T1,class T2,class 3,.....>
    teturn_type function_name(argument of type T1,T2,T3...){
        //function body
    }
*/

#include<iostream>
using namespace std;

template<class T1,class T2,class T3>

void add(T1 val1,T2 val2,T3 val3){
    int ans;
    ans=val1+val2+val3;
    cout<<"The addition of three values is : "<<ans;
}

int main(){
    int a=10,b=20,c=30;
    add(a,b,c);
    return 0;
}