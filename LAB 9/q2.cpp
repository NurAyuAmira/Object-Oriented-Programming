#include<iostream>
#include<string>

using namespace std;

//Create a class called ChoreographyMarks
class ChoreographyMarks
{
	private:
		float points, total;
		
	public:
		//default constructor
		ChoreographyMarks ()
		{
			total=30;
		}
		
		void setCgPoints()
		{
			//set the points based on user input
			cout<<"Enter Choreography Marks        [max:30] : ";
			cin>>points;
		}
		
		//class Dancer is a friend of this class.
		friend class Dancer;
};

//Create a class called InventiveMarks
class InventiveMarks
{
		private:
		float points, total;
		
		public:
			//default constructor
			InventiveMarks()
			{
				total=20;
			}
			
			void setInvPoints()
			{
				//set the points based on user input
				cout<<"Enter Choreography Marks        [max:20] : ";
				cin>>points;
			}
			
			//class Dancer is a friend of this class.
			friend class Dancer;
				
};

class Dancer
{
	private:
		string name;
		int age;
		float finalpoints, cpoints, ipoints;
		
	public:
		void set_details()
		{
			//cin.ignore();
			fflush(stdin);
			
			//set details (name, and age) for a Dancer
			cout<<":::::Details for Dancer:::::"<<endl;
			cout<<"Enter Name  : ";
			getline(cin,name);
			cout<<"Enter age   : ";
			cin>>age;
		}
		
							//takes an object of ChoreographyMarks and an object of InventiveMarks as arguments
		void calcFinalPoints(ChoreographyMarks c, InventiveMarks a) 
		{
			/*This function initializes the cpoints(in %) and ipoints(in %) to the actual marks of the choreography points.
			Use this formula: Actual Points= (Points/ Total)*100;*/
			cpoints=(c.points/c.total)*100;
			
			/*This function initializes the cpoints(in %) and ipoints(in %) to the actual marks of the inventive points.
			Use this formula: Actual Points= (Points/ Total)*100;*/
			ipoints=(a.points/a.total)*100;
			
			/*Calculates the finalpoints (should be in %) based on the raw points(addition of points from choreographymarks object and
			inventivemarks object) divide by total points(addition of total from choreographymarks object and inventivemarks object*/
			finalpoints=((c.points+a.points)/(c.total+a.total))*100;
			
		}
		
		string getName()
		{
			return name;
		}
		
		int getAge()
		{
			return age;
		}
		
		void displayScoreDetails()
		{
			//displays ChoregraphyMarks, InventiveMarks and Final Points, (all in %), using the appropriate data members.
			cout<<endl<<endl<<":::::Score Board:::::"<<endl;
			cout<<"Choreography   : "<<cpoints<<endl;
			cout<<"Inventive      : "<<ipoints<<endl;
			cout<<"Final Score    : "<<finalpoints<<endl;
		}
};

int main()
{
	int num;
	
	//prompt user to enter number of dancers to be created
	cout<<"Enter number of dancers "<<endl;
	cin>>num;
	
	//create a dynamic array of objects based on the size set by user in (i),and new operator
	Dancer *p=new Dancer [num];
	
	//create an object of ChoregraphyMarks
	ChoreographyMarks cm;
	
	//create an object of InventiveMarks
	InventiveMarks am;
	
	for(int i=0; i<num; i++)
	{
		//call the appropriate method to set details for each dancer
		p[i].set_details();
		
		//set the points for the choregraphy and Inventive object each using the appropriate method
		cm.setCgPoints();
		am.setInvPoints();
		p[i].calcFinalPoints(cm,am);
		
		//Display the name and age of the dancer using the appropriate method
		cout<<"-----------------------------------------"<<endl;
		cout<<"========================================="<<endl;
		cout<<"Dancer #"<<i+1<<endl;
		cout<<"========================================="<<endl;
		cout<<"Name\t= "<<p[i].getName()<<endl;
		cout<<"Age\t= "<<p[i].getAge();
		
		//Call displayScoreDetails() using the dynamic object element to display the details of the score
		p[i].displayScoreDetails();
		cout<<"========================================="<<endl;
		cout<<"-----------------------------------------"<<endl;
		
	}
		//delete the dynamic array of objects created in latest int main
		delete [] p;
}



