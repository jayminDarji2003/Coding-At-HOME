// Create a class string with character array as a data member and write a program to ass two strings with use of operator overloading concepts.

#include<iostream>
#include<string.h>
using namespace std;

class String{
    private:
        char ch[10];
    public:
        // String(){
        //     ch[0]='\0';
        // }
        String(char c[10]){
            strcpy(ch,c);
        }

        void operator +(String s11){
            strcat(ch,s11.ch);
            cout<<ch;
        }
};

int main(){
    String s1("Jaymin");
    String s2(" Darji");

    s1+s2;  
    return 0;
}