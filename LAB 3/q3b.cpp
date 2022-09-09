#include<iostream>
#include<string.h>
using namespace std;

class Purchase
{
	private:
		char name[30], code [20],choice;
		int qty;
		float price, total;
		
	public:
		void set_data(char name[], char code [],int qty,float price);
		void calculate();
		void print();
		
};

//define func member outside class
//mutator
void Purchase::set_data(char n[30], char c [20],int q,float p )
{
	strcpy(name,n);
	strcpy(code,c);
	qty = q;
	price = p;
}

void Purchase::calculate()
{
	total=price * qty;
}

void Purchase::print()
{
	do{
		  cout<<endl;
		  cout<<"======================================"<<endl;
          cout<<"             WELCOME                  "<<endl;	
          cout<<"======================================"<<endl;
          cout<<"Enter name         : ";
          cin>>name;
          cout<<"Enter Product code : ";
          cin>>code;
          cout<<"Enter Quantity     : ";
          cin>>qty;
          cout<<"Enter Price        : RM ";
          cin>>price;
          
          calculate();
		
		cout<<"====================================="<<endl;
     	cout<<"               RECEIPT               "<<endl;
    	cout<<"====================================="<<endl;
     	cout<<"Name              : "<<name<<endl;
    	cout<<"Product Code      : "<<code<<endl;
	    cout<<"Quantity          : "<<qty<<endl;
     	cout<<"Product Price     : RM "<<price<<endl;
	    cout<<"Total Payment     : RM "<<total<<endl;
	    
	    cout<<endl<<endl<<"You have another customer to purchase item?[Y/N]: ";
	    cin>>choice;
	    
	}while(choice=='Y');
	
	
}

int main()
{
  //declare an object for class Purchase
  Purchase p;
  char name [30],code[20];
  int qty;
  float price;
  

  
  //call function
  p.set_data(name,code,qty,price);
  p.calculate();
  p.print();
  
  return 0;
}
