#include<iostream>
using namespace std;
int main (){
	string weather;
	int temp;
	cin>>temp;
	weather=temp>30 ? "hot":"pleasent";
	cout<<weather<<endl;
	return 0;
}
