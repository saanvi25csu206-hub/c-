/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution
to compute total expenses and apply a discount accordingly*/
#include<iostream>
using namespace std;
class Bill{
    private:
    int i;
    float p,price;
    public:
    void getdata(){
        cout<<"Enter number of items:";
        cin>>i;
        cout<<"Enter item price:";
        cin>>p;
    }
    void checkdata(){
        price=p*i;
        cout<<"your amout comes out to be :"<<price<<endl;
        if(i>1000){           //% mat likho double quotes mein
            cout<<"you get a 10 percent discout"<<endl<<"Final amout to be payed is:";
            cout<<price-price*0.1;
        }
    }
};
int main(){
    Bill c;
    c.getdata();
    c.checkdata();
    return 0;
}