/*when we are fetching input from terminal the input is strored in buffer and we are trying to fetch
the input from buffer.buffer contains that empty space also as cin encounters that empty space from 
the buffer it assumes that the string is terminated and it shows that part of the string which comes
before the emplty character

get line function reads the entire line and it does not ignores the spaces which were present in
 the buffer memory


a function is known as method in object oriented programming

if no spaces use cout and cin 

if already an input pahle se
cin.ignore();
getline(cin,var);
 */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    cout<<"enter name:";
    getline(cin,name);
        cout<<name;
    return 0;
}