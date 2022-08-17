#include<iostream>
#include<iomanip>

using namespace std;


void average(float *c, int nd); //funtion

int main()
{
	int day;
	float *p; //pointer
	
	cout<<"How many days would you like to record the temperature ? ";
	cin>>day;
	
	p = new float [day];
	
	cout<<endl;
	
	for(int i=0; i<day; i++)
	{
		cout<<"Enter temperature day "<<i+1<<" : ";
		cin>>p[i];
	}
	
	average(p, day);
	delete [] p;
	return 0;
}

void average(float *c, int nd)
{
	float ttl = 0;
	for(int i=0; i<nd; i++)
	{
		ttl += c[i];
	}
	cout<<endl<<"Average temperature : "<<fixed<<setprecision(2)<<ttl/nd<<" Celcius"<<endl;
}
