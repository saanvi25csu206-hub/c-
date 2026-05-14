/*wap to  create a class student with data members,name and marks .
use a constructor to initialize the values and display the student details using a member function 
*/
#include<iostream>
using namespace std;
class Student{
    string name;
    int marks;
    public:
    Student()//default constructor
    {
        name="Rahul";
        marks=81;
    }
void display()
{
    cout<<name;
    cout<<marks;
}
};
int main()
{   
    Student S1;
    S1.display();
}
