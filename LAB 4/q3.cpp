#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class increment
{  private:
	
    float Sc_Point;
    char name [30], rating;
    
    public:
 	char *set_name(){
 		cout<<"-----------------------------"<<endl;
 		cout<<"     Agent Information      "<<endl;
 		cout<<"--------------------------------"<<endl;
		cout<<"\nEnter Name	: ";
		cin>>name;
		
		
		return name;
	}
	
	float set_Sc_Point(){
			cout<<"Score Point     : ";
			cin>>Sc_Point;
		
			
			return Sc_Point;
 		}
	
	
	float set_rating(){
		char A,B,C;
		
		if (Sc_Point>=3.00&&Sc_Point<=4.00) {
			rating='A';
		    } 
		else if (Sc_Point>=2.00&&Sc_Point<=3.00) {
		      rating='B';
		     } 
		else if(Sc_Point>=0.00&&Sc_Point<=1.99){
		        rating='C';
		    }
	
		    return rating;
		}
		    
};
int main(){
	
	increment M;

	string name;
	float score;
	char rate;
	
	name  = M.set_name();
	score = M.set_Sc_Point();
	rate  = M.set_rating();
	
	cout<<"---------------------------------"<<endl;
	cout<<"           Increment Slip        "<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Name            :"<<name<<endl;
	cout<<"Point Awarded   :"<<score<<endl;
	cout<<"Rating          :"<<rate<<endl;
	
	
	
	
}
