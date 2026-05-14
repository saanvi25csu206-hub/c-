/* A text editor auto-detects whether an input letter is a vowel, a consonant or a number. 
Implement a solution to classify the symbol.*/
#include<iostream>
using namespace std;
class Character{
    private:
    char ch;
    public:
    void getdata(){
        cout << "Enter character: ";
        cin >> ch;
    }
    void checkdata(){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<" Vowel";
        }
        else if(ch=='1'||ch=='0'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='7'||ch=='6'||ch=='8'||ch=='9'){
            cout<<"number";
        }
        else{
            cout<<"consonant";
        }
    }
};
int main(){
    Character c ;
    c.getdata();
    c.checkdata();
    return 0;
}