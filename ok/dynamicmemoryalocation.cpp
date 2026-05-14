//DYNAMIC MEMORY ALLOCATION
/*dynamic memory allocation in c++ is done using new and delete operators
1)new operator is used to dynamically allocate the memory while deletem is used to deallocate the 
memory or erase the memory which has been allocated by new */

/*wap to print the numbers in an array using dynamic memory allocation*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int *ptr=new int[size];
    /*ptr* is pointer variable which will store the base adress of my array.one
     we get the base adress,we can iterate through the entire array*/
    for (int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
     for (int i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete[]ptr;
    //delete keyword will dlt the memory occupied by the variables in the program.
    //if we do not dlt the memory occupied by variables,my system will automatically do it once it is shut down
}