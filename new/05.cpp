#include<iostream>
using namespace std;
class Employee{
    int id,salary;
    public:
    Employee(){
        id=7898;
        salary=88000;
    }
      Employee(int m,int n){
        id=m;
        salary=n;
    }
    void display(){
    cout<<id<<endl;
    cout<<salary<<endl;
   }
};
int main(){
    Employee S1;
    Employee S2(5678,8765);
    S1.display();
       S1.display();
}
