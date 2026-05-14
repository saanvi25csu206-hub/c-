#include <iostream>
using namespace std;

class Cource
{
    private:
    string cname,iname;
     int cduration;
public:
    Cource(){}//empty constructor ye destructor mein add karo
    Cource(string m,string n,int o)
    {
        cname=m;
        iname=n;
        cduration=o;

    }
     void display() {
        cout << "Cource Name: " << cname << endl;
        cout << "Instructor name: " << iname << endl;
        cout << "cource duration: " << cduration << endl;
        cout << "----------------------" << endl;
    }
    ~Cource()
    {
          cout<<"Course object deleted"<<endl;}
  };
int main() {
    Cource a("English","Ms Roshi",8);     
    Cource b( "Hindi", "Ms richa", 3);  
    cout << "Cource a Details:\n";
    a.display();
    cout << "Cource b Details:\n";
    b.display();
   
    return 0;
}