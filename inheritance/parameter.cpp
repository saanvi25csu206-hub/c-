#include<iostream>
using namespace std;

class Base
{
    int x,z;
    public:
    Base(int a,int b)
    {
        x=a; 
        z=b;
        cout<<x;
        //cout<<z;
    }
};
class Derived : public Base{
    int y;
    public :
    Derived(int a,int b,int c) : Base(a,b)
    {
        y=c;
        cout<<y;
    }
};

int main()
{
    Derived d(5,10,20);
    return 0;
}