#include<iostream>
using namespace std;


const int SIZE=8;

/*Public member functions: 
 .display_reverse( )
 .Display the array elements of warehouses in reverse order using any looping structure.
 set_data( int* )
  .Get user input for code name.
  .The function has a pointer argument.
  .In a for loop, use the pointer argument to initialize warehouses array.*/
  
class Stationery_Inventory
{
	private: string codeName;
	         int warehouses [SIZE];
	         
    public: 
	void display_reverse()
	{
		int i;
		int j=0;
		
		cout<<endl<<"----------------------------------------"<<endl;
		cout<<"       The Inventory Info               "<<endl;
		cout<<"----------------------------------------"<<endl;
		cout<<"Stationery Code: "<<codeName<<endl;
		for(i=SIZE-1;i>=0;i--)
		{
		   cout<<"Warehouse "<<++j<<" : "<<warehouses[i]<<endl;
		}
	}
	
	void set_data(int *p)
	{
	int i;
	  cout<<endl<<"###########################################"<<endl;
	  cout<<"       Item Entry                          "<<endl;
	  cout<<"-------------------------------------------"<<endl;
	  cout<<"Enter Stationery code: ";
	  cin>>codeName;
	  for(i=0;i<SIZE;i++)
	  warehouses[i]=p[i];
	}
	        	
}hold;// A global object declaration, named hold.


 
 
/* A function named process() :
 Refer to label ¡Process()¡ at sample output.
 Get user input for 10 values that should be stored in a local array.
 Using global object hold, call function set_data(¡K), passing the array and also call display_reverse() after that.*/
void process()
{
	cout<<endl<<"     Colourful Book Holder Stock    "<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"Enter the stocks for 8 warehouses:  "<<endl;
	int array[SIZE];
	for(int i=0; i<SIZE; i++)
	{
		cin>>array[i];
	}
	hold.set_data(array);
	hold.display_reverse();
}
/*In the main():
 Declare an object of the class above
 Declare an array of 8 integer elements and initialize it with the values 
 Using the object (created at (i)), make function call to set_data(….) passing the array declared at (ii).
 Using the object (created at (i)), make function call to display_reverse().
 Call process()*/
 int main()
 {
 	Stationery_Inventory stat;
 	int array[SIZE]= {5, 10, 15, 22, 20, 25, 30, 35};
 	cout<<"      SMART Stationery Shop            "<<endl;
 	stat.set_data(array);
 	stat.display_reverse();
 	process();
 }
 
 
 
