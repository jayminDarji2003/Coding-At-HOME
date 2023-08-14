// Multilevel inheritance program

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_no = r;
}
void Student::get_roll_number(void)
{
    cout << "The roll no is : " << roll_no << endl;
}

class exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void exam ::set_marks(float m,float p){
    maths=m;
    physics=p;
}
void exam ::get_marks(void){
   cout<<"The maths marks is : "<<maths<<endl; 
   cout<<"The physics marks is : "<<physics<<endl; 
}


class result: public exam{
    float percentage;
    public:
        void display_rusult(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths + physics)/2<<"%"<<endl;
        }
};

int main()
{
    result harry;
    harry.set_roll_number(42);
    harry.set_marks(99.0,98.0);
    harry.display_rusult();
    return 0;
}