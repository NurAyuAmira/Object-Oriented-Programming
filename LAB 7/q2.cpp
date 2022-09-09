#include<iostream>
#include<iomanip>

using namespace std;
class ICE_CREAM
{
   private:
   string flavour;
   int number;
   float price;
   
   public:
   void menu();
   void setflavour();
   void setHowMany();
   friend void display_receipt(ICE_CREAM);
   ICE_CREAM();
};

void ICE_CREAM ::menu()
{
	cout<<"==============================================="<<endl;
	cout<<"===            CHOOSE FLAVOUR               ==="<<endl;
	cout<<"==============================================="<<endl;
	cout<<"[1] === Strawberry Flavour RM 3.50"<<endl;
	cout<<"[2] === Chocolate Flavour  RM 2.50"<<endl;
    cout<<"[3] === Vanilla Flavour    RM 1.50"<<endl;
    cout<<"[4] === Durian Flavour     RM 0.50"<<endl<<endl;
}

void ICE_CREAM ::setflavour()
{
	int choice;
	
	cout<<"Choice of flavour: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
		flavour = "Strawberry";
		price = 3.50;
		break;
		
		case 2:
		flavour = "Chocolate";
		price = 2.50;
		break;
		
		case 3:
		flavour = "Vanilla";
		price = 1.50;
		break;
		
		case 4:
		flavour = "Durian";
		price = 0.50;
		break;
				
	}
}

void ICE_CREAM :: setHowMany()
{
	cout<<"How many : ";
	cin>>number;
}

ICE_CREAM::ICE_CREAM()
{
	cout<<"BARNEY'S HOUSE OF ICE";
}

void display_receipt(ICE_CREAM ic)
{
	cout<<"=================================================="<<endl;
	cout<<"===                PAYMENT                     ==="<<endl;
	cout<<"=================================================="<<endl;
	cout<<"Flavour     \t: "<<ic.flavour<<endl;
	cout<<"Total price \t:RM "<<fixed<<setprecision(2)<<ic.price*ic.number<<endl;
}

int main()
{
	ICE_CREAM IC;
	IC.menu();
	IC.setflavour();
	IC.setHowMany();
	
	display_receipt(IC);
	return 0;
}
