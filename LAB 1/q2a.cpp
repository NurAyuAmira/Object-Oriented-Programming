#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	int regular_hours=40, total_hours, overtime_hours;
	float overtime_pay_rate=24.35, base_pay_rate = 18.50, overtime_wages,regular_wages,total_wages;
	
     cout<<"Please enter total hours you've worked this week:";
     cin>>total_hours;
     
    if(total_hours>40)
    {
    	overtime_hours = total_hours - regular_hours;
	}
	else
	{
		overtime_hours= 0;
		regular_hours=total_hours;
	}
    
    regular_wages=base_pay_rate * regular_hours;
    overtime_wages=overtime_pay_rate * overtime_hours;
    total_wages=regular_wages + overtime_wages;

    cout<<"Wages for this week are RM"<<total_wages<<endl;

	
}     
