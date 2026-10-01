#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	int i,j,tem;
	int a[8] = {4,9,87,2,23,4,23};
	
	cout<<"unsorted array"<<endl;
	
	    for(i=0;i<8;i++)      
	{  
	 	cout<<a[i]<<"\t";
                           }
	     for(i=0;i<8;i++) 
	{
	 	 for(j=i+1;j<8;j++)
       {
	 		if (a[j]<a[i])
		  {
	 			 tem=a[i];
	 			 a[i]=a[j];
	 			 a[j]=tem;
		   }
	   }
   }
   cout<<endl;
   
   cout<<"sorted elements"<<endl;
   
   for(i=0;i<8;i++){
   	 cout<<a[i]<<"\t";
   }
   return 0;
}

