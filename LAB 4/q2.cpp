#include<iostream>
#include<cstring>
using namespace std;

class Trivia
{ 
  private:
  string name, country, game_name;
  int age;
  float score[3];
  char status [20];
  
  public:
  void setParticipant()
  {  
   fflush(stdin);
   cout<<"\nEnter Name      : ";
   getline(cin,name);
   cout<<"Enter Country   : ";
   getline(cin, country);
   cout<<"Enter Age       : ";
   cin>>age;
   cin.ignore();
   cout<<"Enter Game Name : ";
   getline(cin, game_name);
  }
  
// a) void score_Gained() function
void score_Gained()
{
	 for(int i=0;i<3;i++)
	 {
	 	cout<<" Enter Score "<< i+1 << " : ";
	 	cin>>score[i];
	 }
}

// b) void average_Val() function
void average_Val()
{
	float total,average;
	
	for(int i=0; i<3; i++)
	{
		total = total + score [i];
	}
	average = total / 3;
	set_status(average);
}

void set_status (double avg)
{
  if (avg >= 80 && avg <= 100)
  strcpy(status , "Excellent");
  else if (avg >= 60 && avg < 80)
  strcpy(status , "Great");
  else
  strcpy(status , "Keep Trying");
}

// c) void display_result() function
void display_result()
{
	cout<<endl<<"----------------------------------------------"<<endl;
	cout<<"                     RESULT SCORED                  "<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Name                 : "<<name<<endl;
	cout<<"Country              : "<<country<<endl;
	cout<<"Age                  : "<<age<<endl;
	cout<<"Game name            : "<<game_name<<endl;
	
	for(int i=0;i<3;i++)
	{
		cout<<" Score"<<i+1<<" : "<<score[i]<<endl;
	}
	cout<<" Status : "<<status<<endl;
}
 
};
int main()
{
	
// d) Write the codes based on the requirements as stated below
    Trivia TV;
    Trivia *TV1;
    TV1= &TV;
    
    int warrior;
    
    cout<<"How many warrior ? ";
    cin>>warrior;
    
    for(int i=0;i<warrior;i++)
    {
    	TV1->setParticipant();
    	TV1->score_Gained();
    	TV1->average_Val();
    	TV1->display_result();
	}
     
     return 0;
}
