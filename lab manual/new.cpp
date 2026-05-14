#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int max=0,favsinger=0;
	int arr[20000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
		{
			if(arr[i]==arr[j]){
				count++;
				arr[j]=-1;
			}
		}
    }
		if(max<count){
			max=count;
			favsinger=1;
		}
		else if(max==count){
			favsinger++;
		}
}
cout<<favsinger;
}