#include<iostream>
#include<iomanip>

using namespace std;

//public boleh guna utk semua function
//private hanya accessor or particular function as contoh setdata

class TravelPackage
{
   public:
   char package;
   int noAdult, noChild;
   float adultPrice, childPrice, discount, totalPrice;
};
  
int main ()
{
	//declare object of class
	TravelPackage TP;
	
	do
	{
		cout<<endl<<"Select Travel Package <A,B,C> : ";
		cin>>TP.package; 
		
		if(TP.package!='A' && TP.package!='B'&& TP.package!='C')
		{
			cout<<"Invalid section"<<endl;
		}
	}while(TP.package!='A' && TP.package!='B'&& TP.package!='C');
    
    cout<<endl<<"Enter no. of adult    : ";
    cin>>TP.noAdult;
    cout<<"Enter no. of children : ";
    cin>>TP.noChild;
    
    switch(TP.package)
    {
    	case 'A':
    		    TP.adultPrice= 1000;
    		    TP.childPrice=500;
    		    break;
    		    
    	case 'B':
    		    TP.adultPrice= 800;
    		    TP.childPrice=600;
    		    break;
    		    
    	case 'C':
    		    TP.adultPrice= 500;
    		    TP.childPrice=300;
    		    break;
	}
	
	//calculate total price
	TP.totalPrice=(TP.adultPrice*TP.noAdult)+(TP.childPrice*TP.noChild);
	
	//if total price> 3000 -> 20%
	if(TP.totalPrice>3000)
	{
		TP.discount=20;
		TP.totalPrice=TP.totalPrice-(TP.totalPrice*TP.discount/100);
	}
	   
	   
	cout<<endl<<fixed<<setprecision(2)<<"Total price : RM "<<TP.totalPrice;
	
	return 0;
}
