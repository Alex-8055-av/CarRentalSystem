#include<iostream>
using namespace std;
int main () {
	int a,b;
	cout<<"enter any two number  "<<endl;
	cin>>a>>b;
	cout<<" + , - , % , *"<<endl;
	char z;
	cin>>z;
	if(z=='+'){
	
	cout<<"addition "<<a+b<<endl; }
	else if(z=='-') {
	
	cout<<"substraction"<<a-b<<endl; }
	else if(z=='%')
	{
		cout<<"dividing"<<a%b<<endl;
	}
	else
	{
		cout<<"multiplying"<<a*b<<endl;
	}
	
	return 0;
	
	
}
