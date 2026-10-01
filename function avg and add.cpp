#include<iostream>
using namespace std;
 int sum(int a,int b) {
 	int s= a+b;
 	return s;
 }
 int avg( int a,int b) {
 	if(a<b){
 		return a;
 	}
 		else { 
 			return b;
		 }
 	
	 
 }
int main (){
int x,y;
cin>>x>>y;
cout<<sum(x,y)<<endl; cout<<avg(x,y);
return 0;
}

