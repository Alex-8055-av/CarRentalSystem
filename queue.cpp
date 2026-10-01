#include<iostream>
#include<vector>
using namespace std;
int main (){
	vector<int> v={ 20,30,40};
	v.push_back(40);
	for(int i :v)
	cout<<i <<"";
}
