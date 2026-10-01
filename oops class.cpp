#include<iostream>
#include<string>
using namespace std;
class student {
	private : string  marks;
	public:
		student() {
			cout<<"hello i am constructor";
		}
		string name;
		string depertment;
		double enrollno;
		string subject;
		
	void changename(string newname) {
		name= newname;
	}
	}; 
	int main (){
			student s1; // constructure call ( student )
		s1.name="alex";
		cout<<s1.name;    
		return 0;
	}
