#include<iostream>
using namespace std;
class bio {
	public:
		string name,stander;
		int mark;
		bio(string n,string s,int m){
			name =n;
			stander =s;
			mark = m;
		}
		void display() {
		cout<<" name "<<name<<endl;
		cout<<" standerd"<<stander<<endl;
		cout<<" marks "<<mark<<endl;
		}
		
};
int main () {
bio s1("avinaash","btech cse",90);
s1.display();
};
