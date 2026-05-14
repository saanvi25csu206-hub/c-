/*when we are taking string input immediately after anyother data type input we need to use the 
cin.ignore()
eg.*/
#include <iostream>
#include<string.h>
using namespace std;
int main() {
	int n;
	string s;
    cout<<"enter number";
	cin >> n; 
    cout<<"enter name";
	cin.ignore();
	getline(cin,s);
	cout<<n*2<<endl;
	cout<<s;
	return 0;
}