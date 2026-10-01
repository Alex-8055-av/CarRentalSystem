#include<iostream>
using namespace std;
int main (){
	int arr[10];
	int i;
	int n = sizeof(arr)/sizeof(int);
	for( i=0;i<=n;i++){
		cin>>arr[i];
		
	}
	for( i=0;i<=n;i++){
cout<<"array"<<arr[i]<<endl;
		
	}
	return 0;
}
