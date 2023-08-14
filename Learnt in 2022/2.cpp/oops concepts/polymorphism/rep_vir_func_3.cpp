// This is the repeat program of the (virtual function 3).
#include<iostream>
#include<cstring>
using namespace std;

class Jaymin{
    protected:
        string title;
        float rating;
    public:
        Jaymin(string t,float r){
            title = t;
            rating = r;
        }
        virtual void display(){ }
};

class videos:public Jaymin{
    protected:
        int length;
    public:
        videos(string t,float r,int len):Jaymin(t,r){
            length=len;
        }
         void display(){ 
            cout<<"This is for video"<<endl;
            cout<<"Title : "<<title<<endl;
            cout<<"Rating : "<<rating<<endl;
            cout<<"Length : "<<length<<" minutes"<<endl;
         }
};

class Text:public Jaymin{
    protected:
        int words;
    public:
        Text(string t,float r,int w):Jaymin(t,r){
            words=w;
        }
         void display(){ 
            cout<<endl;
            cout<<"This is for Text tutorial"<<endl;
            cout<<"Title : "<<title<<endl;
            cout<<"Rating : "<<rating<<endl;
            cout<<"words : "<<words<<" words"<<endl;
         }
};



int main(){
    string title;

    title="web development tutorial";
    videos v(title,4.67,44.55);
    // v.display();

    title="web development text tutorial";
    Text t(title,4.55,440);
    // t.display();

    Jaymin *ptr[2];
    ptr[0]= &v;
    ptr[1]= &t;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}