/*wap to calculate area of square and rectangle using function overloading*/
#include<iostream>
using namespace std;
class Area{
    public:
    int area(int side)
    {
        return (side*side);
    }
    int area( int len,int breadth){
        return (len*breadth);
    }
};
int main(){
    int area_square;
    int area_rectangle;
    Area ob;
    area_rectangle=ob.area(9,7);
    area_square=ob.area(8);
    cout<<"area of square is"<<area_square;
    cout<<"area of z is"<<area_rectangle;
}
