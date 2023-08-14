#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // string write="jaymin darji writing in this file";
    // ofstream writing("sampleFile.txt");
    // writing<<write;

    /*  Description of the program.
            -->First of all we make a string variable "write" which is used to take a string in it.
            -->After making the string we declared the object of "ofstream" and give it which file it want to write.
            -->And last we give the variable to the object.
    */

   string st="This is jaymin darji who is great coder";
   ofstream obj("sampleFile.txt");
   obj<<st;

    return 0;
}