#include<iostream>
#include<iomanip>
using namespace std;

class Produce
{
	private:
	float price, total;
	int qty;
	public:
	Produce(): price(0), total(0), qty(0) {}
	void set_input(float pr, int qt)
	{
		price=pr;
		qty=qt;
		total = price*qty;
	}
	friend class Bill;
};

class Bill
{
	private:
	float grand_total;
	public:
	Bill() : grand_total(0) {}
	void display()
	{
		cout << "\n::The grand total of the bill is : RM "<<fixed<<setprecision(2) <<grand_total;
	}
	void operator+=(Produce &pt)
	{
		cout << "Sub total : RM "<<fixed<<setprecision(2)<< pt.total;
		grand_total += pt.total;
	}
};
int main()
{
	char cont;
	float pr;
	int qt;
	Produce pd;
	Bill BL;

	do
	{
		cout << "\nEnter price : RM ";
		cin >> pr;
		cout << "Enter quantity : ";
		cin >> qt;

		pd.set_input(pr, qt);
		BL += pd; // same as BL.operator+=(pd);
		
		cout << "\n\nContinue (y/n)? ";
		cin.sync();
		cin >> cont;
		
	} while(cont=='y');
	
	BL.display();
	return 0;
	}
