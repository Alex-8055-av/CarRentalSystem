#include<iostream>
#include<stack>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main (){
	stack<string>st;
   int n;
   cout<<"enter the no, of stacks u wanted to print"<<endl;
   cin>>n;
   for(int i =0 ;i<n;i++){
   	string a;
   	cin>>a;
   	st.push(a);
   }
	while(!st.empty()){
		cout<<"reversed"<<endl;
		
		cout<<st.top()<<endl;
		
		st.pop();
	}
	return 0;
}
