/*#include<iostream>
using namespace std;
int main(){
    int arr[12];
    string str="saanvi misra";
    cout<<str;
}*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    cout<<"enter name:";
    cin>>name;
    for(int i=0;i<name.length();i++){
        cout<<name[i];
    }
    return 0;
}
/*when we are fetching input from terminal the input is strored in buffer and we are trying to fetch
the input from buffer.buffer contains that empty space also as cin encounters that empty space from 
the buffer it assumes that the string is terminated and it shows that part of the string which comes
before the emplty character
 */
