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
