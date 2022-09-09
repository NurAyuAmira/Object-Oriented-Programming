#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class Employee
{
	string name, dpmt, post; 
	int id;
	
	public: 
	//constructor
	Employee(string n, int i,string d,string p)
	{
		name=n;
		id=i;
		dpmt=d;
		post=p;
	}
	Employee(string n, int i)
	{
		name=n;
		id=i;
		dpmt ="";
		post="";
	}
	
	//default constructor
	Employee()
	{
		name="";
		id=0;
		dpmt="";
		post="";
	}
	
	//mutator
	void setName(string n)
	{
		name = n;
	}
	void setId(int i)
	{
		id = i;
	}
	void setDpmt(string d)
	{
		dpmt=d;
	}
	void setPost(string p)
	{
		post = p;
	}
	
	//accessor
	string getName()
	{
		return name; 
	}
    int getId()
	{
		return id; 
	}
	string getDpmt()
	{
		return dpmt; 
	}
	string getPost()
	{
		return post; 
	}
};

void display(Employee e)
{
	cout<<"Name: "<<e.getName()<<endl;
	cout<<"ID Number: "<<e.getId()<<endl;
	cout<<"Department: "<<e.getDpmt()<<endl;
	cout<<"Position: "<<e.getPost()<<endl;
	cout<<endl;
}
int main()
{
	Employee E1("Susan Meyers",47899,"Accounting","Vice President");
	display(E1);
	
	Employee E2("Mark Jones",39119,"IT","Programmer");
	display(E2);
	
	Employee E3("Joy Rogers",81774,"Manufacturing","Engineer");
	display(E3);
	
	return 0;
}

