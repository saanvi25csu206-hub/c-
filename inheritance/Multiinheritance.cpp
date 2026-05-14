/*Design a c++ program using multi level inheritance to  employee salary details.create a base
class employee that stores employee 1D and name and includes a function to input these details.
derive a class salary from employee that stores the base salary and include a function to input
the salary .further derive a class bonus to access all functionalities.*/
#include<iostream>
using namespace std;
class Employee{
    string empName;
    int empID;
    public:
    void inputDetails(){
        cout<<"Enter employee name and employee id"<<endl;
        cin>>empName;
        cin>>empID;
    }
};
/*private data remains pvt to that particular class only it can not beused by either
inheritted class or outside the class(main function)
protected data lies between private and public which it can be accessed by inheritted
class but it can not be accessed outside the class(main function)
if public data then can be derived by main functio too*/
class Salary:public Employee{
    protected:
    float salary;
    public:
    void inputSalary(){
        cout<<"Enter the salary of the employee";
        cin>>salary;
        cout<<"Salary of the employee is:"<<salary<<endl;

    }
};
class Bonus:public Salary{
float bonus,total;
public:
  void totalSalary(){
    cout<<"Enter Bonus Amount";
    cin>>bonus;
    total=salary+bonus;
    cout<<"Total Salary is:"<<total;
  }
  
};
int main(){
    Bonus b1;
    b1.inputDetails();
    b1.inputSalary();
    b1.totalSalary();
    return 0;
}
