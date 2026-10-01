#include<iostream>
#include<string>
using namespace std;
int main () {
	
       	string course;
       	string subject;
       	int a,b,c,d;
     	cout<<"select your course"<<endl;
   	      cout<<"(a) B.TECH COMPUTER SCIENCE"<<endl;
        	cout<<"(b) BBA"<<endl;
	         cout<<"(C) BCA"<<endl;
	           cout<<"(d) AGRICULTURE"<<endl;
	cin>>course;
    
    string semester;
	if(course =="a")                                                         // b.tech
	{
	        	cout<<" NOW SELECT YOUR SEMESTER "<<endl;
	            	cout<<"(a) first   semester "<<endl;
	                	cout<<"(b)  second semester"<<endl;
	             	cout<<"(c)  third  semester"<<endl;
	        	        cout<<"(d)  fourth semester"<<endl;
	        
	        	
	           cin>>semester;
	                  if(semester=="a")  {                     // first semester B.TECH 
	                    	cout<<"YOUR SUBJECT "<<endl;
	      	                  cout<<"  MATHS "<<endl;
	                        	cout<<"  PHYSICS"<<endl;
	                        	cout<<"  BASIC COMPUTER"<<endl;
	                           	cout<<"    ENGLISH "<<endl;
	                    if(semester == "b"){
	                    	  cout<<" MATHS 2   "<<endl;
	      	                  cout<<"  OOPS "<<endl;
	                          cout<<"WORKSHOP"<<endl;
	                          cout<<"  PERSONALITY DEVELOPMENT"<<endl;
	                          cout<<"  DSA "<<endl;
	                    	
						}
	                
	                 
	        	     
		  } 	
	        	
	}
	if( course=="b")                                                               //BBA
	{
		    
		    	cout<<" NOW SELECT YOUR SEMESTER "<<endl;
	        	cout<<"(a) first   semester "<<endl;
	        	cout<<"(b)  second semester"<<endl;
	        	cout<<"(c)  third  semester"<<endl;
	        	cout<<"(d)  fourth semester"<<endl;
	        	cin>>semester;
	                  if(semester=="a") {                                      // first semester B.TECH 
	                    	cout<<" SUBJECTS ARE   "<<endl;
	      	                  cout<<"(a)  MATHS "<<endl;
	                        	cout<<"(b)  PHYSICS"<<endl;
	                              cout<<"(c)  BASIC COMPUTER"<<endl;
	                            	cout<<"(d)  DSA "<<endl; }
	                 if(semester=="b"){                                        // second semester B.TECH 
	                 	
					 }
	                            	
	                        
	        	   
	        
	}
	if(course=="c")                                                             //BCA
	{
		cout<<" NOW SELECT YOUR SEMESTER "<<endl;
	        	cout<<"(a) first   semester "<<endl;
	        	cout<<"(b)  second semester"<<endl;
	        	cout<<"(c)  third  semester"<<endl;
	        	cout<<"(d)  fourth semester"<<endl;
	        
   	}
	else                                                                            //AG
	{
		         cout<<" NOW SELECT YOUR SEMESTER "<<endl;
	        	cout<<"(a) first   semester "<<endl;
	        	cout<<"(b)  second semester"<<endl;
	        	cout<<"(c)  third  semester"<<endl;
	        	cout<<"(d)  fourth semester"<<endl;
	        
	}
	return 0 ;
}

