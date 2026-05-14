/*wap to calculate area of circle and square using function overloading*/
#include<iostream>
using namespace std;
class Volume{
    public:
    int area(int side)
    {
        return( side*side);
    }
    double area(double radius){
        return(3.14*radius*radius);//int and float are considered sm data type so use long or double
    }
};
int main (){
    Volume ob;
    cout<<ob.area(2.754);
    cout<<endl;
    cout<<ob.area(4);
}