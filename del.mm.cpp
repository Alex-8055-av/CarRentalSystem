#include<iostream>
#include<string>
using namespace std;
   double intraday( double buy, double sell, double quantity)
   {
        double a;
          a=  ( sell-buy)*quantity - 20 ;
            return a;
   }
   double   delivery( double buy, double sell, double quantity)
     {
	      double b;
             	b = ( sell - buy )* quantity-5;
          	     return b;
      }
    double Future ( double buyput,double sellput, double quantity) 
			       {
			       	double c;
			       	   c=( sellput-buyput) *quantity-20;
			       	         return c;
			       	         
			      }
	double bonds( int quantity , int intrest   ){
		double d;
		      d=quantity%intrest;
	}
     int main ()
          { 
	   int a,b;
          cout<<"CHECK INTREST IN TRADING  "<<endl;
       
           cout<<"enter buy value"<<endl;
          
		     cin>>a;
             
			    cout<<"enter sell value"<<endl;
               
			      cin>>b;
                 
				     cout<<"enter the quantity"<<endl;
				       
					    int c;
				        
						  cin>>c;
				           
						    cout<<intraday(a,b,c)<<endl;
				            
							  cout<<delivery(a,b,c)<<endl;
							    
							     cout<<Future(a,b,c)<<endl;
							      int x,y;
								     cout<<"bonds invesment"<<endl;
									     cout<<"inter the investment amount "<<endl;
									      cin>>x;
									       cout<<"interest"<<endl;
									         cin>>y;
									            cout<<" calculate bound "<<x%y<<endl;
					                                      return 0;
							      
				                
								             
	 }

