#include<iostream>
using namespace std ;
int main () {
	int *arr,size;
	cin>>size;
	cout<<" creating an array of size"<<size;
	arr=new int [size];
	cout<<"allocation of memory is successful"<<endl;
	delete arr;
	return 0;
	}
