#include<iostream>
using namespace std;
int Volume(int s)
{
 return s*s;
}
int Volume(int r,int h){
   return 3.14*r*r*h;
}
int Volume(int l,int b,int h){
    return l*b*h;
}
int main(){
    cout<<"Volume of cube is:"<<Volume(6)<<endl;
    cout<<"Volume of cuboid is:"<<Volume(3,4,8)<<endl;
     cout<<"Volume of cylinder is:"<<Volume(7,8);
    return 0;  
}

