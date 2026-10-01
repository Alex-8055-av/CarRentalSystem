#include<iostream>
#include<algorithm>
using namespace std;
int main (){
int a[5];
int i;
for(i=0;i<5;i++){
	cin>>a[i];
}

sort(a,a+5);
	cout<<"the sorted elements "<<endl;
for(int i=0;i<5;i++){

	cout<<a[i]<<"\t";
}
		
	

}
