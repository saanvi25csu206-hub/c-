#include<iostream>
using namespace std;
void printArr(int arr[],int size,int index,int ele){
    if(index==size){
        return;
    }
    if(arr[index]==ele){
        cout<<index<<endl;
        return;
    }
    printArr(arr,size,index+1,ele);
    cout<<arr[index]<<endl;
}
int main(){
   int arr[]={10,20,30,40};
   int n =sizeof(arr)/sizeof(arr[0]);
   int ele =30;
   printArr(arr,n,0,ele);
   cout<<"_ _ _ _ _ _"<<endl;
   
} 