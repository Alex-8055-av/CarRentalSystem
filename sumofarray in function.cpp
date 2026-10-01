#include<iostream>
using namespace std;
int sumofarray( int a[],int size){
	int sum=0;
	for( int i=0;i<=size;i++){ 
	sum=sum + a[i];
	}
	return sum;
}

int main(){
	int size=6;
	int a[size];
	int i;
	for(i=0;i<=size;i++){
	
		cin>>a[i]; }
	
		
	
	cout<<"the max value is =  "<<sumofarray(a,size)<<endl; 
 }
