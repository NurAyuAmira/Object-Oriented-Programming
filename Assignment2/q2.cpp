#include<iostream>
#include<iomanip>
using namespace std;
const float price=10.50;
class book
{	private:
	string name; float payment;	int quantity;
	public:
		
		void set()
    	{   
			cout<<"Enter your name : ";
		    getline(cin,name);
		    
         	cout<<"Enter book quantity : ";
		    cin>>quantity;
		}		
			
		//-------(i)Write a member function definition for setQuantity() inside the class. This function gets user inputs for name and quantity.
		void setQuantity()
    	{    cout<<"Enter your name : ";
		    getline(cin,name);
		    
         cout<<"Enter book quantity : ";
		    cin>>quantity;
		
		}
		
           void calculate();
           
           //Hint: Make use of the accessor function – getQuantity()
            int getQuantity() 
			{ 
				return quantity;	
			}
};

//------------(ii)Write a member function definition for calculate() outside of the class. This function is to calculate total payment by multiplication of the price and quantity. Display the total payment.
void book::calculate()
{
	payment=quantity*price;
	cout<<"Total Payment : RM "<<fixed<<setprecision(2)<<payment<<endl<<endl;
}

int main()
{	book person1;
	
	//-------(iii)Call a function setQuantity() and calculate() using the person1 object.
	person1.setQuantity();
	person1.calculate();
	
	float totalqty = 0;
	cout<<"\n---------------------------------"<<endl;
	cout<<"          3 Buyers           "<<endl;                                                          
	cout<<"---------------------------------"<<endl;
	
	//For every object element of buyer array of objects
	book buyer[3]; 
	
	//Write the codes to create a for loop that will repeat for 3 times
	for(int i=0;i<3;i++)
	{
		fflush(stdin);
		//Call function setQuantity() and calculate()
		buyer[i].setQuantity();
		buyer[i].calculate();
		 
		totalqty=totalqty+buyer[i].getQuantity();
	}

	//Accumulate the quantity of the object element into variable totalqty.	
  	cout<<"The total quantity books for 3 Buyers : "<<fixed<<setprecision(0)<<totalqty+person1.getQuantity()<<endl;
  	
	 return 0;                                
  }
