#include<iostream>
using namespace std;
class Candy{
    private:
    string color1;
    int points;
    public:
    void getdata(){
        cout<<"Enter color:";
        cin>>color;
        cout<<"Enter points:";
        cin>>points;
    }
    void checkdata(){
     
    }
};
int main(){
     Candy d1;
    d1.getdata();
    d1.checkdata();
     return 0;
}
