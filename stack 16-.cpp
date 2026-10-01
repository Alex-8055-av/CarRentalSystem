#include<bits/stdc++.h>
using namespace std;
int main (){
	stack<int> st;
	int a,l,e,x;
	cin>>x>>e>>l>>a;
 	st.push(x);
	st.push(e);
	st.push(l);
	st.push(a);
while(!st.empty()){
	
	cout<<st.top()<<" ";
	st.pop();
}
	return 0;
}
	   

