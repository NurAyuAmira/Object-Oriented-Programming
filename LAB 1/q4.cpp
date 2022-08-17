#include<iostream>
#include<iomanip>
using namespace std;


void sort(float *p, int qty) //sort for asc
{
	float swap;
	int i, j;
	
	cout<<"\nThe test scores in ascending order, and their average, are:\n\n";
	cout<<"  score\n  -----\n";

	for(i=0; i<qty; i++)
	{
		for(j=i+1; j<qty; j++)
		{
			if(*(p+i) > *(p+j))
			{
				swap = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = swap;
			}
		}
	}
	cout<<"\n";
	for(i=0; i<qty; i++)
	{
		cout<<"  "<<fixed<< setprecision(2)<< *(p+i)<<endl;
	}
}

float average (float total, int qty)
{
	float average;
	
	average = total / qty;
	
	return average;
}

int main()
{
	int qty, x=0, i;
	
	cout<<"How many test scores will you enter? ";
	cin>>qty;
	
	float *ptr, total_score=0.0;
	float avg_score=0.0;
	
	ptr = new float[qty];
	while(x < qty)
	{
		cout<<"Enter test score " <<x+1<< ": ";
		cin>>*(ptr+x);
		
		total_score += *(ptr+x);
		x++;
	}
	
	sort(ptr, qty);
	
	avg_score = average(total_score, qty);
	
	cout<< fixed << setprecision(2)<<"\nAverage Score: " <<avg_score<< endl;
	
	delete[] ptr;
	return 0;
}

