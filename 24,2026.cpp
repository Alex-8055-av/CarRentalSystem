#include<iostream>
using namespace std;
int main (){
	int arr[5];
	int i;
	int n = sizeof(arr)/sizeof(int);
	for( i=0;i<=n;i++){
		cin>>arr[i];
		
	}
	for( i=0;i<=n;i++){
cout<<"array [" <<i<<"]"<<arr[i]<<endl;
		
	}
		cin>>i;
		cout<<arr[i];
	return 0;
}
