#include<iostream>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
int main (){
	int a[4]={2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	print(a,n);
	return 0;
}
