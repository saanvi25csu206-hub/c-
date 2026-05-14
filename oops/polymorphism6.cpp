/*WAP to print whether you are a student , a friend , sibling or a cousin .
 You are a friend if u multiply three integer number . 2. you are a student if you multiply 
 three decimal point numbers. 3. u are a sibling if u multiply 2 decimal numbers with one integer number .
 4. you are a cousin if u multiply 2 integer number with one decimal numbers . */
 #include<iostream>
 using namespace std;
 class Relation{
    public:
    int relation(int a,int b,int c){
        return a*b*c;
    }
    double relation(double a,double b,double c){
        return a*b*c;
    }
    double relation(double a,double b,int c){
        return a*b*c;
    }
    double relation(double a,int b,int c){
        return a*b*c;
    }
};
    int main()
    {
        Relation d;
        cout<<d.relation(3,5,6)<<endl<<"friend"<<endl;
        cout<<d.relation(3.1,5.1,6.1)<<endl<<"student"<<endl;
        cout<<d.relation(3.2,5.2,6)<<endl<<"sibling"<<endl;
        cout<<d.relation(3.4,5,6)<<endl<<"cousin"<<endl;



    }
