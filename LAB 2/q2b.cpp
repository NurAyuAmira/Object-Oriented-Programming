#include<iostream>
using namespace std;

float average(float array[])
{
	int i;
	float total,avg;
	for(i=0;i<5;i++)
	{
		total+=array[i];
	}
	
	avg=total/5;
	
	return avg;
}

char grade(float avg)
{
  char grd;
    
   if(avg>=80)
    grd='A';
   else if(avg>=60)
    grd='B';
    else if(avg>=50)
    grd='C';
    else
    grd='F';
    
    return grd;
}



int main()
{
	string name;
	float marks[5],avg;
	char grd;

	int i;
	
	cout<<"Enter Name     :";
	cin>>name;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter marks :";
		cin>>marks[i];
	}
	
	avg=average (marks);
	grd=grade(avg);
	
	cout<<endl<<"Name    :"<<name<<endl;
	cout<<"Average :"<<avg<<endl;
	cout<<"Grade   :"<<grd<<endl;
 
}


