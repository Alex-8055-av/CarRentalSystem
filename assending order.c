// to find the max number

#include<stdio.h>
int main () 
{
	int a[10],i;
	int j= -1;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	//printf("the number are %d \n",a[i]);
	for(i=1;i<4;i++)
	if( j<a[i]) {
	
  j=a[i]; 
  }
  for( i=j;i<4;i++) 
  
	printf("%d is the  max no. \n",j);
	
}
