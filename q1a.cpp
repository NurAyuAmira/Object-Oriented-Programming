#include<iostream>
using namespace std;

class Fraction
{ 
  private:
  	int nume,denom;
  public:
  	void setdata (int n,int d)
  	{
  	  nume = n;
  	  denom = d;
	}
   int getNume()
   {
   	    return nume;
   }	
   int getDenom()
   {
   	    return denom;
   }
};

int isValid(Fraction ob)
{  
    int valid;
    
	if (ob.getDenom()==0)
    {   
    valid = 0;
    cout<<"\nAlert: Denominator is having value zero "<<endl;
    } 
    else if (ob.getNume()>ob.getDenom())
    {   
	valid = 0;
    cout<<"\nAlert: Numerator greater than denominator"<<endl;
    }  
    else
    valid = 1;
    return valid;
}

int main()
  { 
      Fraction ob1[3];
      for(int i=0; i<3; i++)
  { 
   ob1[i].setdata(i+1,2-i);
   cout<<"Fraction "<<ob1[i].getNume()<<"/"<<ob1[i].getDenom();
      if(isValid(ob1[i]))
       cout<<" is valid";
       else
       cout<<" is iNvalid";
       
       cout<<endl<<endl;
  }
     return 0;
  }
