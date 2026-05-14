//EXCEPTION HANDLING IN C++
/*compile time errors are those errors which may come during compile time and mostly they are 
syntactical errors which may arise due to the wrong syntax such as missing semi coln and spelling
mistake in any predefined function but exceptions are runtime errors which occurs due to some mistake
in the logic written by the developer.
for eg-division by 0,array index out of box (suppose the size of the array is 4 and we are trying
to access the fifth element.)
when an exeption occurs it abrubtly terminates the program if we have not written any 
mechanism to handle the exception
we handle the exceptoion by using three  key words
1)try-We place the code which might throw an exception in try block . 
2)throw-used to throw the exception 
3)catch-to catch the exeption thrown by throw keyword.
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    try{
        if(b==0)
        {throw b;}
        c=a/b;
    }
catch(int x)
{
    cout<<"Exception occured"<<x;

}
}