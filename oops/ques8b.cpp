/*Q8.A monitoring system generates a sequence of numeric event IDs from 1 to N.
To make logs easier to analyse, the system applies tags to certain events based on 
predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fuzz”
• Events divisible by both 3 and 5 receive both tags */
#include<iostream>
using namespace std;
class Divisible{
    private:
    int num;
    public:
    void getdata(){
        cout << "Enter number: ";
        cin >> num;
    }
    void checkdata(){
        if(num%3==0 & num%5){
            cout<<" Buzz annd Fuzz";
        }
        else if(num%3==0){
            cout<<"Buzz";
        }
        else if(num%5==0){
            cout<<"Fuzz";
        }
        else if(num%3==0 & num%5){
            cout<<" Buzz annd Fuzz";
        }
        else{
            cout<<"none";
        }
    }

};
int main(){
    Divisible c ;
    c.getdata();
    c.checkdata();
    return 0;
}