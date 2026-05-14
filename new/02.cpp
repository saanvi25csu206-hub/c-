/*create another constructor which takes two parameters and initializes the data members */
#include<iostream>
using namespace std;
class Student{
   string name;
   int marks;
   public:
   Student()
   {
    name="Rahul";
    marks=81;
   }
   Student(string n,int m)//parameter constructor
   {
    name=n;
    marks=m;
   }
   void display(){
    cout<<name;
    cout<<marks;
   }
};
int main(){
    Student S1;
    Student S2("Ram",85);
    S1.display();
    S2.display();

}