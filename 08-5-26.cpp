#include<iostream>
using namespace std;
int printodd(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<a[i]<<"\t";
		}
	}
}
int main () {
	int a[5] ={2,3,4,45,6};
	int n =sizeof(a)/sizeof(int);
	printodd(a,n);
	return 0;
	}
