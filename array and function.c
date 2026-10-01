#include<stdio.h>
int sum( int a,int b)
{ 
return a+b;
}
int main () {
	int a[3][3]={
		{1,2,3},
		{2,3,4},
		{4,5,2}
	 };
	 printf("%d",sum( a[1][1],a[2][2]));
} 
