#include<iostream>
using namespace std;
void printData(int num){
    if(num==3){
        return;
    }
    cout<<num<<endl;
    printData(num+1);
    cout<<num<<endl;
    printData(num+1);
    cout<<num<<endl;
}
int main(){
 printData(1);
 return 0;  
}//recursion tree