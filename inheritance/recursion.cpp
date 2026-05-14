/*#include<iostream>
using namespace std;
void printArr(int arr[],int index,int size){
    if(index==size){
        return;
    }
    cout<<arr[index]<<endl;
    printArr(arr,index+1,size);
}
int main(){
   int arr[]={10,20,30,40};
   int size =sizeof(arr)/sizeof(arr[0]);
   printArr(arr,0,size);
   cout<<"_ _ _ _ _ _"<<endl;
   
}
*/
#include<iostream>
using namespace std;
void printArr(int arr[],int index,int n){
    if(index==n){
        return;
    }
    printArr(arr,n,index+1);
    cout<<arr[index]<<endl;
}//backtracking recursion
int main(){
   int arr[]={10,20,30,40};
   int n =sizeof(arr)/sizeof(arr[0]);
   printArr(arr,n,0);
   cout<<"_ _ _ _ _ _"<<endl;
   
}