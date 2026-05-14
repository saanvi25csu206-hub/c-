//MULTIPLE CATCH BLOCK IN C++ HANDLING
/*we can have multiple catch blocks for a single try statement and mostly we used only one try statement
followed by multiple catch blocks which means we try to keep all the exceptions in
one try statement but it can be caught by respective catch blocks*/
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cin>>choice;
    try{
        if(choice==1)
        {
            throw 100;
        }
        else if(choice==2)
        {
            throw 5.2;
        }
        else if(choice==3)
        {
            throw "Wrong choice";
        }
    }
    catch(int x)//catching an integer value
    {
        cout<<"Integer exception";
    }
    catch(double x)
    {
        cout<<"Double exception"<<x;
    }
    catch(const char* msg)
    {
        cout<<msg;
    }
    catch(...)/*If any of the exception does not have a respective catch block then it will go to
    catch block which contains (...) and this catch block always comes in the end*/
    {
        cout<<"Exception occured";
    }
}