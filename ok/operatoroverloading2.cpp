//OPERATOROVERLOADING BY USING FRIEND FUNCTION
/*when we will overload the operator using friend function in that case two class object will be passed as
an argument and we are able to walk on operaqtor overloading.*/
#include<iostream>
using namespace std;
class Sample
{
    int num;
    public:
    Sample(int x=0)
    {
        num=x;

    }
friend Sample add(Sample,Sample);
void display()
{
    cout<<num;
}
};
Sample add(Sample S1,Sample S2)
{
    Sample temp;
    temp.num=S1.num+S2.num;
    return temp;
} 
int main()
{
    Sample S1(20);
    Sample S2(40);
    Sample S3;
    S3=add(S1,S2);
    S3.display();
}