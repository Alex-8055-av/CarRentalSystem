
	  
	  #include<iostream>
	  using namespace std;
	  
	     double calculateprofit(double buy ,double sell,int quantity)
		 {
	  	    return( sell -buy)*quantity;
	     }
	           double calculateloss(double buy ,double sell,int quantity)
	          { 
	            return(buy-sell)*quantity; 
		      }
		      
		             void updatacapital(double &capital ,double result ) 
					 {
					 	capital += result;
			         }
			         
		void displayresult(double result)
		   {
			 if(result>0)
		    	  cout<<"profit :"<<result<<endl;
		  	  
			      else if ( result < 0)
			  
			      cout<<"loss :"<<result<<endl;
			    
			       else
			      
			       cout<<"no profit no loss"<<result<<endl; 
	     	}
	     	int main ()
	         
			 	{int buy,sell,quantity;
	     	 
			       int capital=10000;
	     	  
			       cout<<"enter the buy "<<endl;
	     	   
				     cin>>buy;
	     	    
				       cout<<"enter the sell"<<endl;
	     	     
				         cin>>sell;
	     	      
				           cout<<"enter the quantity"<<endl;
	     	       
					         cin>>quantity;
	     	        
		 double result;
		  
		  if(sell>buy) 
		 
		    	result = calculateprofit(buy,sell,quantity);
		 	
		 	else
		 	    
		 	    result = - calculateloss(buy,sell,quantity);
		 	    
		 	    displayresult(result);
		 	    updatecapital( capital,result);
		 	    cout<<"update capital"<<capital<<endl;
		 	    return 0;
		 
				 }
	     	                
	     	
		      
	         
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
