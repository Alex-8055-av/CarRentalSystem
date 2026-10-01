#include<stdio.h>
int main ()  {
	int a[10];
	int n=-1;
	int i;
	for(i=0;i<9;i++)
	{ scanf("%d",&a[i]);
	printf("%d %d",i,a[i]);
	}
	for(i=0;i<9;i++)
	if (n<a[i]) {
		n=a[i];
	}
	printf( "%d \n",n);
}
