/*wap to calculate volume of cone, cuboid,cube using function overloading*/
#include<iostream>
using namespace std;
class Volumefigure{
public:
int Volume(int side)
{
 return side*side*side;
}
int Volume(int length,int breadth,int height){    //same name ke liiye mulltiple function but rule is they should hv different number of parameters if same number
    return length*breadth*height;    //number of parameters then differnt data type
}
float Volume(float radius,int height){
    return((3.24*radius*radius*height)/3);
}
};

int main(){
    int vol_cube;
    int vol_cuboid;
    float vol_cone;
    Volumefigure ob;
    vol_cube=ob.Volume(5);
    vol_cuboid=ob.Volume(6,7,8);
    vol_cone=ob.Volume(5.2,7.2);
    cout<<"Volume of cone is:"<<vol_cone;
    cout<<"Volume of cuboid is:"<<vol_cuboid;
    cout<<"Volume of cube is:"<<vol_cube;
return 0;  
}