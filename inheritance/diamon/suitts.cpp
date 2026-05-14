//FUNCTION OVERRIDING
/*run time polymorphism when my object decides which function to call during run time
the object does not know which function is to be called during compile time.it is achieved by  
method overiding 
method overiding means overriding the s function in derived class and it shall hv the sm name,sm number of arguments,entirely
sm signature as that of base class but we can define the functionality in a different way then base class.
*/
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
    {
        cout<<"You are in base class";
    }
};
class Derived:public Base{
    public:
    void show()
    {
        cout<<"you are in derived class";
    }
};
int main()
{
    Base *B;
    Derived d;
    B=&d;//Base class pointer is holding the address of derived class object.
    B -> show();
}
/*to implement virtual function/function overiding/dynamic time polymorphism\run time polymorhism we need a base class
pointer and derived class object.*/
 /*when we use virtual key word in base class ,the base pointer will always call the derived class method if it stores the reference
 of derived class object */
 //28 april-8:45-9:30