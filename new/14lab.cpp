#include<iostream>
using namespace std;
class Vehicle
{
    private:
    string vt,on,vn;
    int rf;
    public:
Vehicle(){
    vn="Not Assigned";
    on="Unknown";
    vt="General";
    rf=0;
}
Vehicle(string m,string n){
    vn=m;
    on=n;
    vt="General";
    rf=0;
}
Vehicle(string m,string n,string p,int q){
    vn=m;
    on=n;
    vt=p;
    rf=q;
}
void display(){
       cout << "Vehicle name:"<<vn<<endl;
       cout<<"Owner name:"<<on<<endl;
       cout<<"vehicle type:"<<vt<<endl;
       cout<<"registration fee"<<rf<<endl;
        cout << "----------------------" << endl;
}
};
int main(){
 Vehicle a;
 Vehicle b("Ford","saanvi");
 Vehicle c("BMW","Samaira","car",67000);

    cout << "vehicle1 Details:\n";
    a.display();

    cout << "vehicle2 Details:\n";
    b.display();

    cout << "vehicle3 Details:\n";
    c.display();

    return 0;
}
