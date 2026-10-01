#include<iostream>
#include<string>
using namespace std;
int main(){
       float a,b;
        cin>>a>>b;
           char ops;
          cin>>ops;
        switch (ops){
        	case '+':
        		cout<<(a+b)<<endl;
        		 break;
          	case '-':
        	           	cout<<(a-b)<<endl;
        	   	 break;
        	case '/':
        		cout<<(a*b)<<endl;
        		 break;
	    	case '*':
        		cout<<(a/b)<<endl;
        		 break;
}
	
   return 0;
}
