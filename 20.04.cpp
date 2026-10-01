#include<iostream>
#include<fstream>
using namespace std;
int main (){
	char arr[100];
	 cout<<" enter anything"<<endl;
	  cin.getline(arr,100);
	   
	    ofstream myfile("avinash kumar");
	    myfile<<arr;
	       
	         myfile.close();
	          cout<<"write operation "<<endl;
	           return 0;
}

