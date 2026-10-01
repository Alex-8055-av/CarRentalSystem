#include<iostream>
using namespace std;
class student {
	public :
		string name;
		int roll;
		void getdata(string n,int r){
			name=n;
			roll=r;
		}
		void showdata(){
			cout<<"name :"<<name<<"\nroll:::"<<roll<<endl;
		}
};
int main (){
	student s1,s2;
	s1.getdata("avinash",90);
		s1.showdata();
		 s2.getdata("alex",50);
		 s2.showdata();
		
}
