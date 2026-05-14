/* A calendar app calculates whether February has 29 days. Implement a solution to check if 
a year is a leap year or not.*/
#include<iostream>
using namespace std;
class Feb{
    private:
    int year;
    public:
    void getdata(){
        cout<<"Enter year:";
        cin>>year;
    }
    void checkdata(){
        if(year%4==0 && year%100!=0){
            cout<<"Leap Year";
        }
        else if(year %100==0){
            if(year%400==0){
                cout<<"Leap year";
            }
            else{
                cout<<"not a leap year";
            }
        }
        else{
            cout<<"not a leap year";
        }

    }
};
int main(){
    Feb c ;
    c.getdata();
    c.checkdata();
    return 0;
}