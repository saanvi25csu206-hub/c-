#include <iostream>
using namespace std;

class Table
{
    private:
    string material;
     int price,legs;
public:
Table(){}
    Table()
    {    
        material="wood";
        price = 5000;
        legs=4;
    }
    Table(string m,int n)
    { material=m;
     price =n;
     legs=4;
    }
    Table(string m,int n,int o)
    { 
    material=m;
     price =n;
     legs=o;
        
    }
     void display() {
        cout << "Material: " << material << endl;
        cout << "Price: " << price << endl;
        cout << "Number of legs: " << legs << endl;
        cout << "----------------------" << endl;
    }
};
int main() {

    // Creating objects using different constructors
    Table a ;                     // Default constructor
    Table b( "Steel", 7000);      // Material + Price
    Table c( "Glass", 12000, 3);  // Material + Price + Legs

    cout << "Table 1 Details:\n";
    a.display();

    cout << "Table 2 Details:\n";
    b.display();

    cout << "Table 3 Details:\n";
    c.display();

    return 0;
}