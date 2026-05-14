/*wap to find largets amongst 3 number by using all these function types
 and classes and objects*/
#include<iostream>
using namespace std;
class Largest {
    private:
    int a,b,c;
    public:
    void getdata(){
        cout<<"Enter number:";
        cin>>a;
        cout<<"Enter number:";
        cin>>b;
        cout<<"Enter number:";
        cin>>c;
    }
    void largest1(){
        if(a>b && a>c){
            cout<<a;
        } 
        else if(b>c && b>a){
            cout<<b;
        }
        else{
            cout<<c;
    }
}
    void largest2(int a,int b,int c){
         if(a>b && a>c){
            cout<<a;
        } 
        else if(b>c && b>a){
            cout<<b;
        }
        else{
            cout<<c;
    }

    }
    int largest3(){
        if(a>b && a>c){
            return a;
        } 
        else if(b>c && b>a){
            return b;
        }
        else{
            return c;
        }
    }
    int largest4(int a,int b,int c){
        if(a>b && a>c){
            return a;
        } 
        else if(b>c && b>a){
            return b;
        }
        else{
            return c;
        }
    }
    
};
int main(){
    Largest d;
    d.getdata();
    d.largest1();
    cout<<endl;
    d.largest2(2,8,9);
    cout<<endl;
    cout<<d.largest3();
    cout<<endl;
    cout<<d.largest4(9,8,7);
}