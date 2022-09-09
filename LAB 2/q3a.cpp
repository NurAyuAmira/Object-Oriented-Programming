#include<iostream>
using namespace std;

struct Student
{
char name[30], grd;
float marks[5], avg;
};

float average(float array[])
{
	int i;
	float total=0.0,avg=0.0;
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
int i;
struct Student S1;

cout<<"Enter Name :";
cin.getline(S1.name, 30);

for(i=0;i<=4;i++)
{
cout<<"Enter Marks : ";
cin>>S1.marks[i];
}
	S1.avg = average(S1.marks);
    S1.grd = grade(S1.avg);

	cout<<endl<<endl;
	cout<<"Name    : "<<S1.name<<endl;
    cout<<"Average : "<<S1.avg<<endl;;
    cout<<"Grade   : "<<S1.grd<<endl;
 
}

