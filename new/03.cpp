#include<iostream>
using namespace std;
class Car{
   string brand;
   int price;
   public:
   Car()
   {
    brand="Ford";
    price=81000;
   }
   Car(string n,int m)//parameter constructor
   {
    brand=n;
    price=m;
   }
   void display(){
    cout<<brand<<endl;
    cout<<price;
   }
};
int main(){
    Car S1;
    Car S2("Maruti",85000);
    S1.display();
    S2.display();

}