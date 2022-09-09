#include<iostream>
using namespace std;

class ArtificialGrass
	{ 	
		private: int length, width, depth;
		public:
		void grass_data(int q, int r, int s )
			{ 
				length = q; 
				width = r; 
				depth = s; 
			}
					
		int grass_gauge()
			{ 
				return length * width * depth; 
			}
		
		//default constructor
		ArtificialGrass()
		{
			length = 4; 
			width = 6;
			depth = 3;
		}
		
		//destructor 
		~ArtificialGrass()
		{
			cout<<"Deleting the artificial grass details"<<endl<<endl;
		}
	};
	
int main()
	{
		//Create an object of class ArtificialGrass using the new operator.
		ArtificialGrass *A = new ArtificialGrass;
		
		//Display the artificial grass’s details with invoke appropriate functions
		cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<" The Artificial Grass Details "<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<" The Previous Batch Set Left.... "<<endl;
		cout<<" Available Grass Size : "<< A->grass_gauge ()<<" cm [2 pieces in one set]"<<endl<<endl;
		
		//Delete the ArtificialGrass’s object.
		delete A;
		
		//Display the new stock available.
		cout<<endl<<"======================================================"<<endl;
		cout<<" The Stocks Available... "<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		
		//Create a dynamic array of 3 objects using the new operator.
		A=new ArtificialGrass[3];
		
		
		int b=1;
		//Using a for loop, call related functions
		for(int i=0; i<3; i++)
		{
			//Invoke the grass_data(..) function with passing the value of the counter + 2 for each declared argument in the parameter bracket.
			A[i].grass_data(i+2,i+2,i+2);
			cout<<" The Grass Size SET # "<<b++<<endl;
			//invoke the grass_gauge() functions to print out the values
			cout<<"->>"<<A[i].grass_gauge()<<"cm [2 pices in one set]"<<endl<<endl;		
		}
		
		//Delete the object you created in latest dynamic array
		delete [] A;
		
		return 0;
		
		
	}
