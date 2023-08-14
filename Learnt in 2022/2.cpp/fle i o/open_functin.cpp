#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream out;
    // out.open("r_and_w_to_file.txt");
    // out<<"This is open function"<<endl;
    // out<<"This function is very useful";
    // out.close();

    ifstream in;
    string str,str2;
    in.open("r_and_w_to_file.cpp");
    // in>>str>>str2;
    while (in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    
    // cout<<str<<str2;
    in.close();

    return 0;
}