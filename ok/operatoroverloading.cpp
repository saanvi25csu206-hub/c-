//operator overloading
/*operatoroverloading means we can make some of the operators do the different functions for example  '+' 
operator can add  two arithmetic numbers and concatinate two strings and can add two objects also.
for example '*' is used for multiplication of 2 numbers and it is also used as dereferencing operators.
some of the operators cannot be overloaded such as new delete ,scope resolution operator(see lms)
*/

//WAP to add two objects using operator overloading 
#include<iostream>
using namespace std;
class Sample
{
    int num;
    public:
    Sample(int x=0)/*this is the default argument when we will not pass any variable as argument 
    in object creation ,the number will be initialized to zero by default.
    Whenever we return an object ,the return type should be class name or vice verca*/

    {
        num=x;
    }
Sample operator+(Sample x1)
{
    Sample temp;//local object of sample class which will store the sum of 2 object.
    temp.num=num+x1.num;
    return temp;
}
void display()
{
    cout<<num<<endl;
}
};
int main()
{
    Sample S1(24);
    Sample S2(40);
    Sample S3;
    S1.display();
    S2.display();
    S3.display();
    S3=S1+(S2);//S1 is calling operator '+' and s2 is passed as an argument in operator function
    //the value of s2 will be passed on to x1
    S3.display();
}