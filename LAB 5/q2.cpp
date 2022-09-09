#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class Achievement
{
	string name;
	int score;
	
	public:
		void set_data(string N, float S)
		{
			name = N;
			score = S;	
		}
		
		void display_scale()
		{
			cout<<endl<<"=============================="<<endl;
			cout<<"  "<<name<<endl;
			cout<<"The Class Passing Grade Achievement : "<<score<<" %"<<endl;
			
			if(score >= 85 && score <= 100)
			{
				cout<<"*****"<<endl;
			}
			
			else if(score >= 70 && score <= 84.9)
			{
				cout<<"****"<<endl;
			}
			
			else if(score >= 60 && score <= 69.9)
			{
				cout<<"***"<<endl;
			}
			
			else if(score >= 50 && score <= 59.9)
			{
				cout<<"**"<<endl;
			}
			
			else if(score < 50)
			{
				cout<<"Poor Achievemnet"<<endl;
			}
	}
};

int main()
{
	Achievement A[4];
	
	string N;
	float S;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"          Enter Class Achievement"<<endl;
	cout<<"--------------------------------------------"<<endl;
	
	for(int i=0; i<4; i++)
	{
		cout<<"Enter the class name          : ";
		cin>>N;
		cout<<"The class achievement(%)      : ";
		cin>>S;
		
		cout<<endl;
		
		A[i].set_data(N, S);
	}
	
	cout<<endl<<"  THE SUMMARY OF UPSR TRIAL EXAM RESULT"<<endl;
	
	for(int i=0; i<4; i++)
	{
		A[i].display_scale();
	}
	
	return 0;
}
