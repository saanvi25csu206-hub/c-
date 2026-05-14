#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"I am in class A";
        class A;
    }
};
class B
{
    public:
    void display()
    {
        cout<<"I am in class B";
    }
};
class c:public A,public B{
    public:
    void enter()
    {
        cout<<"I am in class c";

    }
};
int main()
{
    c ob;
    ob.show();
    ob.display();
    ob.enter();
}