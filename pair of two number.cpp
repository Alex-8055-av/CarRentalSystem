#include<iostream>
using namespace std;
int main () {
	int a[5]={2,3,4,1,3};
	int i,j;
	int value=5;	
	int count =0;
	for( i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]+a[j]==value){
			cout<<a[i]<<"+"<<a[j]<<"="<<value<<endl;
			count = count +1;
			}
		}
	}
	return 0;
}
