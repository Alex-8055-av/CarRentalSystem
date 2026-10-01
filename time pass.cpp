#include<iostream>
using namespace std;
int mul(int a, int b){int fuuncptr;
	return a*b;
}
int main (){ int funcptr;
	int (funcprt)(int,int);
	funcptr = mul;
	cout<<funcptr( 2,3);
	return 0;
}
