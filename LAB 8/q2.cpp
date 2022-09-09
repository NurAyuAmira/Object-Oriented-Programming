#include <iostream>
#include<iomanip>
using namespace std;

class Ticket
{
	private:
		int no;
		float price;
		
	public:
		Ticket()
		{
			price=10.00;
		}
		void setTicket()
		{
			cout<<"Please enter number of tickets to purchase :";
			cin>>no;
		}
		friend class Student;
};

class Student
{
	private:
		string id, name, purchase;
		Ticket P;
		
	public:
		void setStudent()
		{
			cout<<endl<<"Enter ID :";
			cin>>id;
			cout<<"Enter Name     :";
			cin>>name;
		}
		
		void ticket_entry()
		{
			char a;
			cout<<endl<<"Do you want to purchase charity tickets? [Enter Y or N] :";
			cin>>a;
			
			if(a=='Y')
			{
				purchase="Yes";
				P.setTicket();
			}
			else
			{
				purchase="No";
				cout<<"---No tickets purchase---"<<endl;
				P.no=0;
			}
		}
		void display()
		{
			cout<<endl<<"-------------------------------";
			cout<<endl<<"STUDENT DETAILS";
			cout<<endl<<"-------------------------------";
			cout<<endl<<"ID:\t "<<id; 
			cout<<endl<<"Name:\t "<<name; 
			cout<<endl<<endl<<"-------------------------------";
			cout<<endl<<"ADDITIONAL DETAILS";
			cout<<endl<<"-------------------------------";
			if(purchase=="Yes") 
			{
				cout<<"\nYou've purchase " <<P.no<<" Tickets";
				cout<<"\nTotal amount : RM "<<P.no*P.price<<endl; 
			}
			else
			{
				cout<<"\nYou've not purchased any tickets"<<endl;
			}
		}
};
int main()
{
		Student s[3]; 
		for(int i=0;i<3;i++) 	
		{
			s[i].setStudent();
			s[i].ticket_entry();
			s[i].display();

		}
			cout<<endl<<"-------------------------------"<<endl;
			
			return 0;
}

