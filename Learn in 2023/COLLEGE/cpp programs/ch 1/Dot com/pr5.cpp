#include<iostream>
using namespace std;

void power(int m,int n=2){
    int ans=1;
    // while (n>0)
    // {
    //     ans=ans*m;
    //     n--;
    // }

    for (int i = 0; i < 2; i++)
    {
        ans=ans*m;
    }
    

    cout<<"The ans is : "<<ans<<endl;
}

int main(){
    int m,n;
    power(50);                                       
    return 0;
}