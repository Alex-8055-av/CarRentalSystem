#include<iostream>
#include<fstream>
using namespace std;
	int main (){
		ifstream file("hello");
		string line ;
		if (file.is_open()){
			while(getline(file,line)){
				cout<<line<<endl;
			}
			file.close();
		}
		cout<<"unable ";
		return 0;
	}
