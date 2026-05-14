#include<iostream>
using namespace std;
class Rev{
    private:
    char temp,s[10000];
    int n=0;
    public:
    void getdata(){
        cin>>s;

    }
    void checkdata(){
        n=0;
      while(s[n]!=0){
        n=n+1;
      }
    for(int i=0;i<n/2;i++){
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
}
cout<<s;
}
};
int main(){
    Rev c;
    c.getdata();
    c.checkdata();
    return 0;
}