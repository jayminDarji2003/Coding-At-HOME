#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st;
    ifstream read("sample2.txt");
    // read>>st;    //for one word
    getline(read,st);
    cout<<st;


    return 0;
}