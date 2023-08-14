/*  Inheritance:-
        1.Inheritace is the most important topic in oops.
        2.We can reuse the class and additional features.
        3.Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again.
        4.Name will class will be...
            Base class ----> Derived class
            Parent class ----> Child class

    Types(form) of Inheritance
        -->There are five types of inheritace.

        1.Single inheritace
        2.Multiple inheritace
        3.Multilevel inheritace
        4.Hierarchical inheritace
        5.Hybrid inheritace

    Description of Inheritance

        1.Single inheritace :-In single inheritace we have one base class and one derived class.

            Base class -----> derived class

                base class
                    |
                derived class
                
        
        2.Multiple inheritance :- In multiple we have more then one base class and one derived class.

            Base class ----->  derived class
            Base class ----->>>>>>>> |

            1_base   2_base
                   |
                 derived


        3.Multilevel :- Deriving a class from already derived class

            base ----> derived -----> derived

            1_Base class
                |
            1_derived class (will be base of 2_derived class)
                |
            2_derived class


        4.Hieracuical inheritance :- Several derived class from one base class.

            Base class ---->derived class
                |      ---->derived class 
            
                      Base class
                          | 
            derived class   derived class

        5.Hyvbrid inheritance :- Hybrid inheritace is a combination of multiple inheritace and multilevel inheritace.
             ---> A class is derived from two class as in multiple inheritace
             --->However, one of the parent class is not a base class

             base class --->derived class ----> derived class
                            derived class

                          Base class
                              |
                Derived class   Derived class
                              |
                          Derived class
*/
#include <iostream>
using namespace std;

int main()
{
    cout<<"This is the example program of inheritance.";
    return 0;
}