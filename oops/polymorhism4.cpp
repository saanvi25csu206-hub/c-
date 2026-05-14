/*wap to calculate volume of hemisphere and sphere*/
#include<iostream>
using namespace std;
class Volumefigure{
public:
int Volume(int r)
{
 return (2*3.14*r*r*r)/3;
}
long Volume(long r1){//same name ke liiye mulltiple function but rule is they dhould hv different number of parameters if same number
    return (4*r1*r1*r1*3.14)/3;//number of parameters then differnt data type
}
};

int main(){
    int vol_hemisphere;
    long vol_sphere;
    Volumefigure ob;
    vol_sphere=ob.Volume(5);
    vol_hemisphere=ob.Volume(6);
    cout<<"Volume of hemisphere is:"<<vol_hemisphere;
    cout<<"Volume of sphere is:"<<vol_sphere;
return 0;  
}
