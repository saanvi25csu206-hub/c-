//PARAMETERIZED CONSTRUCTORS IN INHERITANCE

/*wap to print 2 numbers
the first number shall be initialized through base class constructor, second
number shall be initialized through derived class constructor.
*/
#include<iostream>
using namespace std;
class Base
{
    int x;
    public:
    Base(int a)
    {
        x=a;
        cout<<x;
    }
};
class Derived:public Base{
    int y;
    public:
Derived(int a,int b):Base(a)
{
    y=b;
    cout<<y;
}
};
int main()
{
    Derived d(5,10);
    return 0;
}
