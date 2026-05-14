/20/04/2026/
//Function overloading
//also method overloading and method overriding

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
    public :
    void show()
    {
        cout << "you are in base class ";
    }
};

class Derived : public Base 
{
    public :
    void show()
    {
        cout << "you are in derived class";
    }
};

int main()
{
    Base * B;
    Derived d ;
    B =&d ; // base class pointer is holding the address of derived class object .
    B ->show();

    return 0;
}


/*to implement virtual function/function overiding/method overiding/dynamic time polymorphism / run time polymorphism . we need a base class pointer and derived class object */

//there's a class animal - dog and cat
//when we use virtual keyword in base class , the base pointer will always call the derivedc class method if it stores the reference of derived class object. 
//28/04/2026
//8:45 - 9:30 10marks     output based questions