#include<iostream>
using namespace std;
int main(){
    int arr[2][2],arr1[2][2],arr2[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"enter term:";
            cin>>arr[i][j];
        }
    }
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"enter term:";
            cin>>arr1[i][j];
        }
    }
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr2[i][j]=arr[i][j]+arr1[i][j];
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}