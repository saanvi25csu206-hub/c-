#include<iostream>
using namespace std;
class Voter{
    int age;
    public:
    void getdata(){
        cout<<"Enter age";
        cin>>age;
    }
    void check(){
        if(age>=18){
            cout<<"eligivble to vote";
        }
        else{
            cout<<"not eligible to vote";
        }
    }
};
int main(){
    Voter c ;
    c.getdata();
    c.check();
    return 0;
}