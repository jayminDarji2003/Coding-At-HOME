// This is the repeat program of the 3 program
#include <iostream>
using namespace std;

    // Student class
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(void);
    void dis_roll_no(void);
};
void Student ::set_roll_no()
{
    cout<<"Enter the roll no of the student = ";
    cin>>roll_no;
}
void Student ::dis_roll_no(void)
{
    cout<<"The roll no of the student is = "<<roll_no<<endl;
}


    // Exam class
class Exam : public Student{
    protected:
        float ICET,c_language,maths,HTML;
    public:
        void set_marks(void);
        void dis_marks(void);
};
void Exam::set_marks(){
    cout<<"Enter ICET marks = ";
    cin>>ICET;
    cout<<"Enter c language marks = ";
    cin>>c_language;
    cout<<"Enter maths marks = ";
    cin>>maths;
    cout<<"Enter HTML marks = ";
    cin>>HTML;
}
void Exam ::dis_marks(){
    cout<<endl<<"The ICET marks is = "<<ICET<<endl;
    cout<<"The c language marks is = "<< c_language<<endl;
    cout<<"The maths marks is = "<<maths<<endl;
    cout<<"The html marks is = "<<HTML<<endl;
}


    // Result class
class Result:public Exam{
    protected:
        float percentege;
    public:
        void dis_result(void);
};
void Result :: dis_result(){
    cout<<"******************Result declared*******************"<<endl;
    dis_roll_no();
    dis_marks();
    percentege = (ICET + c_language + maths + HTML)/4;
    cout<<endl<<"The percentage is = "<<percentege<<"%"<<endl;
}


int main()
{
    Result jay;
    jay.set_roll_no();
    jay.set_marks();
    jay.dis_result();
    return 0;
}