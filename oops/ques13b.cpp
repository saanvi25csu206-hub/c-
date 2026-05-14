/*A mathematics tool computes the exact roots of a quadratic equation for teaching 
purposes. Implement a solution to calculate the roots of a quadratic equation.*/
#include<iostream>
using namespace std;
#include<math.h>
class Formula{
    private:
    int a,b,c,d;
    public:
    void getdata(){
        cout<<"Enter coefficient of x square:";
        cin>>a;
        cout<<"Enter coefficient of x:";
        cin>>b;
        cout<<"constant term:";
        cin>>c;
    }
    void checkdata(){
        d=b*b-4*a*c;
        cout<<"Roots are:";
        cout<<(-b+sqrt(d))/2*a<<","<<(-b-sqrt(d))/2*a;
        
    }
};
int main(){
    Formula d1;
    d1.getdata();
    d1.checkdata();
    return 0;
}