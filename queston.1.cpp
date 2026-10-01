#include<iostream>
using namespace std;
int maxnum( int a, int b){
	if(a>b)
	return a;
	else 
	return b;
}
int main (){
	int x,y;
	cout<<"enter the number "<<endl;
	cin>>x>>y;
	cout<<" the max number will be "<<maxnum(x,y);
	return 0;
}

