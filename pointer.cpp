#include<iostream>
using namespace std;
int main () {
	int a=3;
	
	int *b = &a;
	//&---- address operator;
	cout<<"the address of A is "<<b<<endl;
	// *--- deferance
	cout<<"the value of operator b  "<<*b<<endl;
	return 0;
}
