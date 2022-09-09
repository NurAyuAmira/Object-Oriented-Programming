#include<iostream>
#include<cmath>
using namespace std;
//Create class Triangle. base class
class Triangle
{
	//protected data members : a(int), b(int), c(int)
	protected:
		int a, b, c;
	
	//public member functions	
	public:
	Triangle() //Default constructor
	{ 
		cout<<"----- Triangle class -------"<<endl;
	}
	void setData(int x,int y) 
	{ 
		//To set the data member a and b with the value of its arguments
		a=x;
		b=y;
	}
};

//Create class PythogorasTriangle which inherits publicly from class Triangle. derived class
class PythogorasTriangle: public Triangle
{
	
	public:
	PythogorasTriangle()//Default constructor
	{ 
		cout<<"-----Pythogoras Triangle------"<<endl;
	}
	void calculateHypotenuse()
	{
		c=sqrt(pow(a,2)+pow(b,2));
	}
	void displaySides()
	{ 
		//Display values of a, b and c.
		cout<<endl<<"::The sides of a pythogoras triangle::"<<endl;
		cout<<"a :"<<a<<endl;
		cout<<"b :"<<b<<endl;
		cout<<"c :"<<c<<"(also known as the Hypotenuse)"<<endl;
	}	
};

int main()
{
	
	//Create an object of class PythogorasTriangle using the new operator.
	PythogorasTriangle *pt;
	pt=new PythogorasTriangle;
	
	/*Get user input in the main function for 2 sides(side a and side b)
	of a Pythogoras Triangle and */
	int a, b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	
	/*pass it to the setData(..) 
	function as arguments. Invoke the setData(..) function through the dynamic object*/
	pt->setData(a,b);
	
	//Using the same object , call calcHypotenuse() and displaySides().
	pt->calculateHypotenuse();
	pt->displaySides();
	
	//Deallocate the memory for the object.
	delete pt;
}
