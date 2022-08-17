#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const int NUM_EMPS = 5;
int index;
int hours[NUM_EMPS];
double payRate[NUM_EMPS];
double grossPay;
cout << "Enter the hours worked and hourly pay rates of "<<NUM_EMPS<<" employees.";

for(index=0;index<NUM_EMPS;index++)
{
	cout<<endl<<"Hours worked by employee #"<<index+1<<" : ";
	cin>>hours[index];
	cout<<"Hours payrate by employee #"<<index+1<<" : ";
	cin>>payRate[index];
	
	
}
cout<<endl<<"Here is the gross pay for each employee: "<<endl;
for(index=0;index<NUM_EMPS;index++)
{
 
 grossPay=hours[index]*payRate[index]; 
 

 cout<<" Employee #"<<index+1<<" :RM "<<fixed<<setprecision(2)<<grossPay<<endl;
	
	
}
return 0;
}
