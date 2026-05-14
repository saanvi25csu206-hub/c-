/*A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. 
Implement a solution to check the triangle type based on its sides.*/
#include<iostream>
using namespace std;
class Triangle{
    private:
    float a,b,c;
    public:
    void getdata(){
        cout<<"Enter the length of first side:";
        cin>>a;
        cout<<"Enter the length of second side:";
        cin>>b;
        cout<<"Enter the length of third side:";
        cin>>c;
    }
    void checkdata(){
        if(a==b && a==c && b==c){
            cout<< "euilateral triangle";
        }
        else if(a==b||a==c||b==c){
            cout<<"Isosceles Triangle";
        }
        else{
            cout<<"Scalene Triangele";
        }
    }
};
int main(){
     Triangle d1;
    d1.getdata();
    d1.checkdata();
     return 0;
}
