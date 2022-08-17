#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int number,total_number=0;
    
    cout<<"Enter a number: ";
    cin>>number;
    
    while(number!=99)
    {
    	total_number=total_number + number;
    	cout<<"Enter a number: ";
        cin>>number;
	}
	cout<<"The total is "<<total_number;
	
}     
