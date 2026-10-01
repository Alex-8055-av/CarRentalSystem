#include<bits/stdc++.h>
#include<string>
using namespace std;
int main (){
	stack<string>st;
	int n;
	cout<<"enter the number of latter you wanted to print "<<endl;
	cin>>n;
	cout<<"enter the name"<<endl;
	for(int i=0;i<n;i++){
		string a;
		cin>>a;
		st.push(a);
		
		
	}
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
	return 0;
}
