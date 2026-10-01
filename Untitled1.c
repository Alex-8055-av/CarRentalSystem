#include<stdio.h>
int main () {
	int a[5],i,j;
	j= -1;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	printf("%d \n",a[i]);
	for(i=0;i<4;i++)
	if (j<a[i])
	{
		j=a[i];
	
	printf("%d \n ",j);
	}
   }
