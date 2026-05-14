//FRIEND FUNCTION
/*friendfunction is used to access the pvt and protected data of a class.as we know that pvt data of a class
 cannot be accessed  by members which are present outside the class but there can be certain circumstances 
 where we need to 
access the pvt.In that case we make use of friend function.a friend function does not belong to any of the
 class
(not in the scope of any class).
since it is not in the scope of any class it cannot be called by  using the object of any class.It is called
 like
a normal function
we hv to declare all the classes which are using the friend function and this is known as forward declaration*/
#include<iostream>
using namespace std;
class xyz;//fwd declaration
class abc
{
    int num1;
    public:
    abc(int x)
    {
        num1=x;
    }
friend void add(abc,xyz);
};
class xyz
{
    int num2;
    public:
    xyz(int y)
    {
        num2=y;
    }
    friend void add(abc,xyz);

};
void add(abc a1,xyz x1)
{
    int sum ;//local variable
    sum=a1.num1+x1.num2;
    cout<<sum;
}
int main()
{
    abc a1(10);
    xyz x1(20);
    add(a1,x1);
}