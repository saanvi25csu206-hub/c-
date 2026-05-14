#include <iostream>
using namespace std;

class Mobile
{
    private:
    string brand;
     int price,storage;
public:
Mobile(){}
    Mobile(string m)
    {    
       brand=m;
    }
    Mobile(string m,int n)
    {
    brand=m;
    price =n;
    }
    Mobile(string m,int n,int o)
    { 
    brand=m;
    price =n;
    storage=o;
        
    }
     void display() {
        cout << "Brand: " << brand<< endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage<< endl;
        cout << "----------------------" << endl;
    }
};
int main() {
    Mobile a ("Samsung");
    Mobile b( "Apple", 70000);      
    Mobile c( "One Plus", 65000, 128);  

    cout << "Mobile 1 Details:\n";
    a.display();

    cout << "Mobile 2 Details:\n";
    b.display();

    cout << "Mobile 3 Details:\n";
    c.display();

    return 0;
}