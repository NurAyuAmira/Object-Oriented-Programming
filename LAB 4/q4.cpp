#include<iostream> 
#include<iomanip>
using namespace std;

class Strawberry 
{
	private:
		string selection;
		double price;
	public:
		void dispStrawberrySelection()
		{
			cout<<"[1] Strawberry & Nutella Crepe           Price:RM 10.00 "<<endl;
			cout<<"[2] Strawberry & Chocolate Crepe         Price:RM 12.00 "<<endl;
			cout<<"[3] Strawberry Waffle with Custard       Price:RM 10.00 "<<endl;
			cout<<"[4] Strawberry Smoothie                  Price:RM 10.00 "<<endl;
			cout<<"[5] Strawberry & Country Cream           Price:RM 13.00 "<<endl;
		}
		void purchase()
		{
			int choice;
			
			cout<<endl<<"Enter your choice based on the number "<<endl;
			cin>>choice;
			
			if(choice==1)
			{
				price=10.00;
				selection=" Strawberry & Nutella Crepe ";
			}
			else if(choice==2)
			{
				price=12.00;
				selection=" Strawberry & Chocolate Crepe ";
			}
			else if(choice==3)
			{
				price=12.00;
				selection=" Strawberry Waffle with Custard ";
			}
			else if(choice==4)
			{
				price=10.00;
				selection=" Strawberry Smoothie ";
			}
			else if(choice==5)
			{
				price=13.00;
				selection=" Strawberry & Country Cream ";
			}
			else
			{
				price=0.00;
                selection="Not Available";
			}
			
		}
		
		double getPrice()
		{
			return price;
		}
		
		string getSelection()
		{
			return selection;
		}
};

class Customer
{
	private:
		string name, StrawSelect;
		double payment;
		Strawberry st;
	public:
		void set_data()
		{
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
			cout<<"        Tutti Frutti: Strawberry              "<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
			
			fflush(stdin);
			cout<<"Your name  : ";
			cin>>name;
			
			getOrder();
		}
		
		void getOrder()
		{
			st.dispStrawberrySelection();
			st.purchase();
			payment=st.getPrice();
			StrawSelect=st.getSelection();
		}
		
		void dispDetails()
		{
			cout<<"....................................................."<<endl;
			cout<<name<<", Your purchase details "<<endl;
			cout<<"....................................................."<<endl;
			cout<<"Selection            :"<<StrawSelect<<endl;
			cout<<"Payment to be made   : RM "<<fixed<<setprecision(2)<<payment<<endl;
		}	
};

int main()
{
	Customer cust;
	cust.set_data();
	cust.dispDetails();
	
}
