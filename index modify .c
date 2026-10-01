#include<stdio.h>
int main () {
	int a[10];
	int i;
	for(i=0;i<9;i++)
	scanf("%d",&a[i]);
	printf("%d",a[i]);
	for(i=0;i<9;i++)
	if(a[i]%2==0)
	{
	printf("%d",a[i]=a[i]*2);
		
	}
	else
	{
		a[i]=a[i]+10;
	}
//	printf("the element are %d",a[i]);
} 
