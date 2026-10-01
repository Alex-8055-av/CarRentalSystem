#include<iostream>
using namespace std;
int main (){
	int i,j;
	int a[3][2]={{0,1},
	             {1,2},
	             {3,4}};
for(i=0;i<3;i++){
	for(j=0;j<2;j++)
	{
		cout<<"a["<<i<<"]["<<j<<"] :";
		cout<<a[i][j]<<endl;
	}
} 
return 0;
				 
}
