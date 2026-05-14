#include<iostream>
using namespace std;
class Addition{
 int num1,num2;
 int sum;
 public:
 void getdata(){
    cout<<"Enter first number:";
    cin >>num1;
    cout<<"Enter second number:";
    cin>>num2;
 }
 void sumnum(){
    sum=num1+num2;
    cout<<"The sum of two numbers is:"<<sum;
 }

};
int main(){
    Addition c ;
    c.getdata();    // getdata humesha checkdata ke upar as in input statement upar fir
   c.sumnum();               // code wala statement
    return 0;
}