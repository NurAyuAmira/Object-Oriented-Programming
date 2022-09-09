#include <iostream>
using namespace std;
int main ( )
{
	 int subject, num;
	 float total_payment,average_payment;
	 float *Fees;

	cout<<"How many subjects have you registered : ";
	cin>>subject;
	
	Fees= new float[subject];
	
	for (num=0; num<subject; num++)
	{
		cout<<"Class "<<num+1<<" fees charge: RM ";
		cin>>Fees[num];
		total_payment= total_payment+ *(Fees+num);
	}
	
	cout<<"==== SEPTEMBER 2016 PAYMENT DETAILS ====";
	cout<<endl<<"Fees charges you have entered: ";
	for (num=0; num<subject; num++)
	{
		cout<<Fees[num]<<"(RM)...";
	}
	average_payment = total_payment/subject;
	
	cout<<endl<<"Total payment to be made: RM "<<total_payment;
	cout<<endl<<"Minimum payment (Average of total payment): RM "<<average_payment;
return 0;
}
