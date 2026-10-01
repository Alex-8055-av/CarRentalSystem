#include<iostream>
using namespace std;
int main () 
{
	int a[6]={10,3,2,12,1};
	int i,j,temp;
	for(i=0;i<5;i++) {
		for( j=0;j<4;j++){
			if(a[j>a[j+1]]){
				temp =a[j];
				a[j]=a[j+1];
				a[j+1] = temp;
			}
		}
	}
	return 0;
	
	
  }  
