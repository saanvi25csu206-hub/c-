//*/WAP to add 1) two integers 2) one integer and one double 3) one double and one integer 4) two doubles/
#include<iostream>
using namespace std;
class Add
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(int a,double b)
    {
        return a+b;
    }
    double add(double a,int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
};
int main()
{
    int sum1;
    double sum2;
    double sum3,sum4;
    Add oba;
    sum1=oba.add(5,6);
    sum2=oba.add(5,6.5);
    sum3=oba.add(5.2,6);
    sum4=oba.add(5.2,6.3);
    cout<<"Sum of two integers is "<<sum1<<endl;
    cout<<"Sum of integer and float is "<<sum2<<endl;
    cout<<"Sum of double and integer is "<<sum3<<endl;
    cout<<"Sum of two doubles is "<<sum4<<endl;
}