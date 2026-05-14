#include <iostream>
using namespace std;

class Laptop
{
    private:
    string brand;
     int price,ram;
public:
Laptop(){}
    Laptop(string m)
    {    
       brand=m;
    }
    Laptop(string m,int n)
    {
    brand=m;
    price =n;
    }
    Laptop(string m,int n,int o)
    { 
    brand=m;
    price =n;
    ram=o;
        
    }
     void display() {
        cout << "Brand: " << brand<< endl;
        cout << "Price: " << price << endl;
        cout << "RAM: " << ram<< endl;
        cout << "----------------------" << endl;
    }
};
int main() {
    Laptop a ("Samsung");
    Laptop b( "Apple", 70000);      
    Laptop c( "One Plus", 65000, 128);  

    cout << "Laptop 1 Details:\n";
    a.display();

    cout << "Laptop 2 Details:\n";
    b.display();

    cout << "Laptop 3 Details:\n";
    c.display();

    return 0;
}

