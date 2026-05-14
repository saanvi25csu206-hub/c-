#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int x=0,y=0;
    cin>>s;
	for(int i=0;i<s.length();i++){
		if (s[i]=='z'){
		x=x+1;
		}
		else {
			break;
		}
	}
	for(int i=0;i<s.length();i++){
		if(s[i]=='o'){
		y=y+1;
	}
	}
	if(2*x==y){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}

    return 0;
}