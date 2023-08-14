//Write a program with use of inheritance : Define a class publisher that stores the name of the title . Derive two classes book and tape , which inherit publisher . Book class contains member data called page no and tape class contain time for playing . Define functions in the appropriate classes to get and print the details .

#include<iostream>
using namespace std;

class Publisher{
    private:
        string title;
    public:
        void getTitle(){
            cout<<"Enter title : ";
            cin>>title;
        }
        void disTitle(){
            cout<<"Title is : "<<title<<endl;
        }
};
class Book : public Publisher{
    private:
        int page_no;
    public:
        void getPageNO(){
            cout<<"Enter page no : ";
            cin>>page_no;
        }
        void disPageNO(){
            cout<<"Page no is : "<<page_no<<endl;
        }
};
class Tape : public Publisher{
    private:
        int time_for_playing;
    public:
        void getPlay(){
            cout<<"Enter time for playing : ";
            cin>>time_for_playing;
        }
        void disPlay(){
            cout<<"Time for playing is : "<<time_for_playing<<endl;
        }
};

int main(){
    Book b;
    Tape t;
    b.getTitle();
    b.getPageNO();
    t.getPlay();

    b.disTitle();
    b.disPageNO();
    t.disPlay();
    return 0;
}