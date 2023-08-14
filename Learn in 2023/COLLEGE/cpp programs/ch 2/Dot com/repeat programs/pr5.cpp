#include<iostream>
#include<cstring>
using namespace std;

class string{
    private:
        char str[10];
    public:
        string(){
            cout<<"Defualt constructor called"<<endl;
        }
        string(char *ch){
            strcpy(str,ch);
            // cout<<"the "
        }

};

int main(){
    
    return 0;
}