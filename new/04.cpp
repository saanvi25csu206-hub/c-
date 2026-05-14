#include<iostream>
using namespace std;
class Rectangle{
  int length,breadth;
   public:
   Rectangle()
   {
    length=8;
    breadth=5;
   }
   Rectangle(int n,int m)
   {
    length=n;
    breadth=m;
   }
   void display(){
    cout<<length<<endl;
    cout<<breadth<<endl;
    cout<<length*breadth;
   }
};
int main(){
    Rectangle S1;
    Rectangle S2(4,5);
    S1.display();
    S2.display();
}