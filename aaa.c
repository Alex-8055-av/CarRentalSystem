#include<stdio.h>
main () {
	int i;
	i=0;
	printf("the number before call %d \n ",i);
	f1(i);
	printf("the value after call %d \n ",i);
}
void f1 (int k)
{
	k=k+10;
}
