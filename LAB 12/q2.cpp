#include<iostream>
#include<iomanip>
using namespace std;
class Staff
{
	//protected data members : name (string), id(string), age(int), salary(float),nett_salary(float).
	protected:
	string name;
	int id, age;
	float salary, nett_salary;
	
	public:

	void setdata()
	{ 
		// To get user input for all except nett_salary.
		fflush(stdin);
		cout<<endl<<"Enter Name : ";
		getline(cin, name);
		cout<<"Enter ID : ";
		cin>>id;
		cout<<"Enter Age : ";
		cin>>age;
		cout<<"Enter salary : RM ";
		cin>>salary;
	}
	
	//accessor
	float get_nett_salary() 
	{ 
		return nett_salary; 
	}
};

class Executive : public Staff
{
	private:
	int OT_hrs;
	float rate;
	
	public:
	void setExecutive()
	{
		//To get user input for OT_hrs and rate.
		cout<<"Enter OT_hrs : ";
		cin>>OT_hrs;
		cout<<"Enter Rate : RM ";
		cin>>rate;
	}
	void cal_salary_exec()
	{
		//To calculate nett_salary using Formula : nett_salary = salary + (OT_Hrs * rate).
		nett_salary = salary + (OT_hrs * rate);
	}
	void display()
	{ 
		//Display name, ID, age, salary, OT_Hrs, rate and nett_salary.
		cout<<fixed<<setprecision(2);
		cout<<endl<<"Name : "<<name<<endl;
		cout<<"ID : "<<id<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Salary : RM "<<salary<<endl;
		cout<<"OT Hours : "<<OT_hrs<<endl;
		cout<<"OT Rate : RM "<<rate<<endl;
		cout<<"Nett Salary : RM "<<nett_salary<<endl;
	}
};

class Salesperson:public Staff
{
	private:
	int units;
	float bonus;
	
	public:
	void setSalesperson()
	{
		//To get user input for units.
		cout<<"Enter Units : ";
		cin>>units;
	}	
	void cal_salary_sales()
	{		
		if (units > 500)
		{
			bonus = 500;
		}
		else
		{
			bonus = 250;
		}
			nett_salary = salary + bonus;
	}
	void display()
	{ 
		//Display name, ID, age, salary, units, bonus and nett salary.
		cout<<fixed<<setprecision(2);
		cout<<endl<<"Name : "<<name<<endl;
		cout<<"ID : "<<id<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Salary : RM "<<salary<<endl;
		cout<<"Units : "<<units<<endl;
		cout<<"Bonus : RM "<<bonus<<endl;
		cout<<"Nett Salary : RM "<<nett_salary<<endl;
	}
};
int main()
{
	int choice,total_staff=0; 
	float total_payout=0; 
	char ans; 
	cout<<"Do you want to continue ? "; 
	cin>>ans; while(ans=='Y'|| ans=='y') 
	{
	//Ask the user to select between Executive and Salesperson.
	cout<<"Enter [1] for Executive OR [2] for Salesperson : ";
	cin>>choice;
	if (choice == 1)
	{
		//If the user selects Executive, create an object for class Executive and call the appropriate member functions.
		Executive E;
		E.setdata();
		E.setExecutive();
		E.cal_salary_exec();
		E.display();
		total_payout+=E.get_nett_salary();
	}
	else if (choice == 2)
	{
		//If the user selects Salesperson, create an object for class Salesperson and call the appropriate member functions.
		Salesperson S;
		S.setdata();
		S.setSalesperson();
		S.cal_salary_sales();
		S.display();
		total_payout+=S.get_nett_salary();
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
	total_staff++; 
	cout<<"Do you want to continue ? "; 
	cin>>ans; }
	cout<<"\nTotal Staff:"<<total_staff<<endl; 
	cout<<"Total Payouts is RM "<<total_payout<<endl;
}
