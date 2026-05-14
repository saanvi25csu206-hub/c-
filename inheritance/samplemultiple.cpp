/*create  a class study marks which stores the marks scored by a studeny in studies.
create a class activity marks which stores the marks scored by student in extracurricular activities
create a class total marks which is derived from study marks and activity marks and it stores the total 
marks as the sum of study marks and activity marks
in main function create an object of totalmarks and call the other functions present in base classes*/
#include<iostream>
using namespace std;
class studymarks
{   
    protected:
    int marks;
    public:
    void input(){
        cout<<"marks scored";
        cin>>marks;
    }
    void show(){
        cout<<marks<<endl;
    }    
};
/*protected data memebers and member functions are accesible to derived classes but inaccesible
to main function while public data memebers and memeber functions are accessibl to derived_
all other classes which are not derived and to the main function.but to access the public data we always need
an object.private data is inaccesible to any other class*/

class activitymarks
{
    protected:
    int marks2;
    public:
    void input1(){
        cout<<"marks scored<<endl";
        cin>>marks2;
    }
     void show1(){
        cout<<marks2<<endl;
    }
};
class totalmarks:public studymarks,public activitymarks
{   
    int t;
    public:
    void total(){
    t=marks+marks2;
    cout<<t<<endl;
}
};
int main(){
    totalmarks t1;
    t1.input();
    t1.show();
    t1.input1();
    t1.show1();
    t1.total();
    return 0;
}