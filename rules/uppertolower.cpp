/*#include <iostream>
using namespace std;
#include<string.h>
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
	while(s[i]!='\0'){
		if(s[i]>='a' && s[i]<='z'){
			s[i]=s[i]-32;
		}
		else if(s[i]>='A'&& s[i]<='Z'){
			s[i]=s[i]+32;
		}
    }
	}
	cout<<s;
}*/
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;   // lowercase → uppercase
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;   // uppercase → lowercase
        }
    }

    cout << s;
    return 0;
}