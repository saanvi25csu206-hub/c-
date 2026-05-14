/*create a class Lion and add a function roar.now create an object of lion class and access the base
 class methods and derived clss methods*/
#include<iostream>
using namespace std;
class Animal
{
    public:
    void eats()
        {
            cout<<"animal eats";
        }
    
};
class Lion:public Animal
{
    public:
    void roars()
    {
        cout<<"lion  roars";
    }
};
int main()
{
    Lion d1;
    d1.eats();
    d1.roars();
}
