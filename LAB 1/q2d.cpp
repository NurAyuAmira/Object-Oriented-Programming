#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   string name;
   char flavor,choose;
   int qty;
   double price,total_price;
   
   cout<<"Welcome to Yummy Ice-Cream"<<endl<<endl;
   cout<<"*******Ice-Cream Flavor*********"<<endl;
   cout<<"[C]Chocolate"<<endl;
   cout<<"[V]Vanilla"<<endl;
   cout<<"[S]Strawberry"<<endl<<endl;
   
   //user name,flavor,quantity
   cout<<"Enter name : ";
   cin>>name;
   
   
   
   
   do
   {
   	
   
   	    
   	    cout<<"Enter flavor : ";
        cin>>flavor;
     	
            while(flavor !='C' && flavor !='S' && flavor !='V')
            {
            	cout<<"Incorrect flavor. Re-enter flavor : ";
            	cin>>flavor;
	
		    }
			
			cout<<"Enter quantity : ";
            cin>>qty;
            
			switch(flavor)
		{
			case 'C' : price = 3.50;
			total_price += (qty*price);
			break;
			case 'V' : price = 3.00;
			total_price += (qty*price);
			break;
			case 'S' : price = 2.50;
			total_price += (qty*price);
			break;	
		}
	     
	  cout<<endl<<"Do you want to buy more? <Y-Yes N-No> : ";
	  cin>>choose;
	     
   }while(choose=='Y');
   
   cout<<endl<<"*********RECEIPT***************"<<endl;
   cout<<"Name        : "<<name<<endl;
   cout<<"Total Price :RM "<<fixed<<setprecision(2)<<total_price;
   
   
   
}     
