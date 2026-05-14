/*create a class Animal which contains a function eats.
create a class dog which is inherited from animal class and contains its own function bark.
create a object derived class which is able to accessboth the function eat and bark
*/
#include<iostream>
using namespace std;
class Animal
//signature prototype is syntax
{
    public:
    void eat()
        {
            cout<<"Animal eats";
        }
/*if we are deriving base class in public mode then all the public data of base class will be inherited in 
derived in class
if we are deriving a class in pvt mode all the data of base class becomes pvt and it cannot be accessed further
*/
    
};
class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"Dog barks";
    }
};
int main()
{
    Dog d1;
    d1.eat();
    d1.bark();
}
/*can animal hv acess to bark function?
ans-no because  */