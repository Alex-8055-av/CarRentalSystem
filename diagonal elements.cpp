#include<iostream>
using namespace std;
int main (){
	int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int i,j;
	cout<<"print the matrix"<<endl;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			cout<<a[i][j]<<"\t"<<endl;
		}
	}
	return 0;
}
