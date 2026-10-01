#include<iostream>
using namespace std;
float a(int r)
{
	return 3.14 *r*r;
	
}
float b( int l,int b){
	return l*b;
}
float c(int a,int b){
	return 0.5*a*b;
	
}
int main ()
 {
	int x,y,z;
	cin>>x>>y;
	cout<<"area of a circle = "<<a(x)<<endl;
    cout<<"area of rectangle = "<<b(x,y)<<endl;
	cout<<"area of triangle =  "<<c(x,y)<<endl;
	return 0;
}
