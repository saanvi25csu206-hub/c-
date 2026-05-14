/*wap to print your fathers name and age in base class and initialize it through 
base class constructor in derived class print your name and age through derived 
class constructor
*/
#include<iostream>
using namespace std;
class base{
    string x;
    int y;
    string a;
    int b;
    public:
    base(string a,int b)
    {
        x=a;
        y=b;
        cout<<x<<endl;
        cout<<y<<endl;

    }
};
class Derived:public base
{
    string w;
    int z;
    public:
    Derived(string a,int b,string c,int d):base(a,b)
    {
        w=c;
        z=d;
        cout<<w<<endl;
        cout<<z<<endl;

    }
};
int main()
{
    Derived d("Sunil",45,"Saanvi",18);
    return 0;
}
