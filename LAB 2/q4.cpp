#include<iostream>
#include<iomanip>

using namespace std;

struct Rental 
{ 
 char name[20];
 float rent; int month;
};

float report(struct Rental R[]);

float report(struct Rental R[])
{ 
    float amount,Total_Rented=0;
    int i;
    
	/*Using a for loop, display on the screen the records of tenants that has rental due more than $1000. 
	Also calculate the total amount due for these tenants. [Note: refer to sample output screen]*/
	
    for(i=0;i<=2;i++)
    {
    	amount=R[i].month * R[i].rent;
    	 
        if(amount>1000.00)
        {
        	Total_Rented+=amount;
        	cout<<endl<<"Tenant Name    :"<<R[i].name<<endl;
        	cout<<"Monthly Rental :"<<R[i].rent<<endl;
        	cout<<"Unpaid Month   :"<<R[i].month<<endl;
        	cout<<"Unpaid Amount  :"<<R[i].month * R[i].rent<<endl;
		}
		
	}

   //Return the total amount due.
   return Total_Rented;
}



int main()
{
	struct Rental R[3] = {{"Megan", 300, 4},{"Johnson", 250, 1},{"David", 790, 2}};
	float Total_Rented; 


	cout<<"----------------------------------------------------"<<endl;
	cout<<"-          AMOUNT DUE MORE THAN $1000.00           -"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	
//call func report
//Parameter : array R of struct Rental.
//The function will return the grand total.
cout<<fixed<<setprecision(2);
Total_Rented=report(R);

cout<<endl<<"Total rented to be collected : $"<<Total_Rented;
// Display the grand total amount that is due.

	
	return 0;
}




