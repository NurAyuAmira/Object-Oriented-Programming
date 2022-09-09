#include<iostream>
using namespace std;

//Create class Product
class Product
{
	private: //private data member : prodID (int)
		int prodID;
	
	protected://protected data member: total_price(float)
		float total_price;
		
	public:
		Product() //constructor to initialize total_price to 0.0
		{
			total_price= 0.0;
		}
		int get_prodID() //int getProd_ID()
		{
			//Returns prodID
			return prodID;
		}
		void input_prodID()
		{
			//Get user input for prodID (representing product ID)
			cout << "Enter product ID : ";
			cin >> prodID;
		}	
};

//Create class CanFood which inherits protectedly from class Product.
class CanFood : protected Product
{
	private:
		float unit_price;
		int order_unit;
		
	public:
		void get_Product()
		{
			input_prodID();
			cout << "Enter price : RM";
			cin >> unit_price;
			cout << "Enter order unit : ";
			cin >> order_unit;
			cout<<endl;
		}
		void calculate_total()
		{
			total_price = unit_price * order_unit;
		}
		void display_product()
		{
			cout <<endl<< "Product ID : " << get_prodID() << endl;
			cout << "Total price : " << total_price << endl;	
		}
};

int main()
{
	int can;
	//Prompt the user to enter the number of types of canned food.
	cout << "How many types of canned food? ";
	cin >> can ;
	cout<<endl;
	
	//Create pointer tp of class canFood
	CanFood *tp;
	
	/*Use the pointer tp to create a dynamic array of canFood using new operator. (the size 
	of the array will be the number of types of canned food entered by the user earlier)*/
	tp=new CanFood[can];
	
	for(int i=0; i<can; i++)
	{
		tp[i].get_Product();
		tp[i].calculate_total();
	}
	for(int i=0;i<can; i++)
	{
		tp[i].display_product();
	}
	
	delete []tp;
}
