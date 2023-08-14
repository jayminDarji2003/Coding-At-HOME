    //Concept:- Use the base class's Constructror in derived class 
    /*
        Constructor in single inheritance..
            1.We can use constructor in derived class in cpp.
            2.If base class constructor does not have any arguments, there is no need of any construtor in derived class.
            3.But if there are one or more arguments in the base class constructor,derived class need to pass arguments to the base class constructor.
            4.If both base and derived classes have constructor, base class constructor is executed first.

        Constructor in multiple inheritance..
            1.In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.
                In short--> First name-->first constructor call
                            second name-->second constructor call
        
        Constructor in vitrual base class..      
        1.The constructor for virtual base classes are invoked before an nonvirtual base class.
        2.If there are multiple virtual base classes, they are invoked in the order declared.
        3.Any non-virtual base class are then constructd before the derived class constructor is executed.

        Constructor in multiple inheritance..

    Special syntax for constructor..
        syntax:-
            Derived-consturctor(arguments.....):base1-constructor(argu1,argu2),base2(argu3,argu4){
                .............................
            }

            ex:-
                c(a1,a2,b1,b2,c1,c2):a(a1,a2),b(b1,b2){
                    c=c1;
                    cc=c2;
                    //constructor for c
                }
    
    */
#include<iostream>
using namespace std;

int main(){
    cout<<"This is the constructr in inheritance";
    return 0;
}