/*write a program to add two number using all the types of functions and
 classes and objects*/
 #include<iostream>
 using namespace std;
 class Addition{
    private:
    int a,b,c;
    public:
    void getdata(){
        cout<<"enter first number:";
        cin>>a;
        cout<<"enter second number:";
        cin>>b;
    }
    void add1(){
        c=a+b;
        cout<<c;
    }
    void add2(int a,int b){
        int c;
        c=a+b;
        cout<<c;
    }
    int add3(){
        c=a+b;
        return c;
    }
    int add4(int a,int b)
    {
        return a+b;
    }

 };
    int main(){
        Addition d;
        d.getdata();
        d.add1();
        d.add2(5,9);
        cout<<d.add3();
        cout<<d.add4(14,15);
 }