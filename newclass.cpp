#include<iostream>
using namespace std;
int factorial(int i) {
	int sum=1;
	for(i=1;i<6;i++){
	
		sum=sum*i;
		
	}
	return sum;
}
int main (){

cout<<factorial(5)<<endl;
return 0;
}
