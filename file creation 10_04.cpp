#include<iostream>
   struct student 
  {
  	
   int roll ;
    char name[30];
      float marks; 
        } ;
        
int main () {
	 
	 FILE*fd;
    	struct student s;
	    int i,n,recNO;
	  
	   fd=fopen ("student data","wbt");
	if(fd==NULL){
	  	 printf("error opening file /n");
	  	  return 1;
	  }
	  
	    
}
        

