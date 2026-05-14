#include<iostream>
#include<regex>
using namespace std;
/*REGULAR EXPRESSION
(search table of regular expression)
^-starts with
$-ends with
[A-Z]-chrcaters from this point to this point*/
bool isphoneValid(const string& number){
    regex pattern("^[6-9][0-9]{9}$");//{9} so it runs nine times.pahle ke liye 6-8 then 9 times
    if(!regex_match(number,pattern)){
        return false;
    }
    return true;
}
int main(){
    string phone;
    cout<<"enter a phone number:"<<endl;
    cin>>phone;
    if(isphoneValid(phone)){
        cout<<"Valid phone number"<<endl;
    }
    else{
        cout<<"Invalid phone number:";
    }
    return 0;
}