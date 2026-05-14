/*wap to demonstrate the usage of constructors in single inheritance*/
#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base class constructor"<<endl;
    }
};
class Derived:public Base{
    public:
    Derived()
    {
        cout<<"Derived class constructor";
    }
};
int main()
{
    Derived d;//as soon as we create an object compiler looks for constructor
    //if not found it creates default constructor
    return 0;
}
/*whenever we create a derived class constructor , it is mandatory to create a 
base class constructor
it is the responsibility of the derived class object to call the base class constructor


derived class constructor initializes base class constructor and then its 
own constructor*/