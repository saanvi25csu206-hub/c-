/*create a class student which contains the following data members 1)student name,2)age 3)roll number
create two functions.enter and display.enter takes the input from the user.displays the student
details,
create a class test which is derived from class student. test class contains following data members 
test in focp 2)marks in phy 3)marks in chem
create two functions calc avg and display avg marks.
calculate avg function takes the input of marks from the user and calculate the avg marks.
display avg displays the avg marks
in the main function create an object of derived class and access all the public data of base class and
derived class*/
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int roll_number;
    void Enter()
    {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student age: ";
        cin>>age;
        cout<<"Enter student roll number: ";
        cin>>roll_number;
    }
    void Display()
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Student Roll Number: "<<roll_number<<endl;
    }
};
class test :public student{
    public:
    int marks_focp;
    int marks_physics;
    int marks_chemistry;
    void CalculateAverage()
    {
        cout<<"Enter marks in FOCP: ";
        cin>>marks_focp;
        cout<<"Enter marks in Physics: ";
        cin>>marks_physics;
        cout<<"Enter marks in Chemistry: ";
        cin>>marks_chemistry;
    }
    void DisplayAverage()
    {
        float average = (marks_focp + marks_physics + marks_chemistry) / 3.0;
        cout<<"Average Marks: "<<average<<endl;
    }
};
int main()
{
    test t;
    t.Enter();
    t.Display();
    t.CalculateAverage();
    t.DisplayAverage();
    return 0;
}






















