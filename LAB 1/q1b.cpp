#include <iostream>
#include<iomanip>
using namespace std;



int main()
  {

	float day1, day2, total;
 	cout<<"Enter the sales for day 1 :" ;
 	cin>>day1;
 	
 	cout<<"Enter the sales for day 2 :" ;
 	cin>>day2;
 	
 	total = day1+day2;
 	
 	cout<<endl<<"Qtech Sdn Bhd Sales figures for 2 days "<<endl
 	<<"Day 1 : "<<fixed<<setprecision(2)<<day1<<endl
 	<<"Day 2 : "<<day2<<endl
 	<<"Total : "<<total<<endl;
 	
 	return 0;
 }
