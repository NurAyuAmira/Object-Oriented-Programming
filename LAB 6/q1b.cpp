#include<iostream>
using namespace std;


class MasterStudent
   { 
     string name, title;
     int status;
     public:
     	
     MasterStudent(string n, string t, int x)
    { name = n;
      title = t;
      status = x;
    }
   
     MasterStudent()
    { 
     name = "Peter";
     title = "A Study on the Usability Factors of Mobile Apps.";
     status = 1;
    }
    
    int getStatus()
   { 
     return status;
   }
   
   string getName()
   { 
     return name;
   }  
   string getTitle()
  { 
    return title;
  }
  
  ~MasterStudent()
  { 
    cout<<"\n\n~End of Details~Student~"<<name<<endl;
  }
 };
 
 
int main()
{ 
     MasterStudent MS[4] =
	{
		MasterStudent("Philip Morales","Working with Generation X employees: food industry",1),
		MasterStudent("Cameron Connor","Collective Co-Creation within the Open Source Software Community",1),
		MasterStudent("Meriam Miles","What Makes online video advertisement go viral?",0),
		MasterStudent("Dory Dean","Social Media use for corporate communications",0)
	};
     
    for (int i=0;i<4;i++)
    {
    	 cout<<endl;
		 cout<<"================================="<<endl;
         cout<<" Masters Student Details "<<endl;
         cout<<"================================="<<endl;
         cout<<"Name \t: "<<MS[i].getName()<<endl;
         cout<<"Title \t: "<<MS[i].getTitle()<<endl;
         cout<<"Status \t: ";
         if(MS[i].getStatus() ==1) 
	         cout<<"Approved"<<endl;
         else 
	         cout<<"Pending"<<endl;
	}
       return 0;
	         
}
