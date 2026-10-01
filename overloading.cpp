#include<iostream>
using namespace std;
class calculator {
	public:
		int add(int a, int b){
			return a+b;
		}
		
		int add( int a, int b,int c){
			return a-b-c;
		}
};
int main(){
	calculator c;
cout<<c.add(2,4,5)<<endl;
cout<<c.add(5,6);
	return 0;
	
	
}
