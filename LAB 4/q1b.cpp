#include<iostream>
#include<iomanip>
using namespace std;

class CarProduction
{
   int quantity;
   string plantno;
   
   public:
   void setdata(string s, int q)
   {
     plantno = s;
     quantity = q;
   }
   
  //b.display_graph() function
  void display_graph()
        {
            cout<<endl<<"=============================="<<endl;
            cout<<"  "<<plantno<<endl;

            while(quantity != 1 && quantity != 0)
            {
                quantity -= 2; 
                cout<<"*";
            }

            if(quantity % 2 != 0)
            {
                cout<<"#";
            }
        }
};

int main()
{
   //a. declare an array named C of 4 object elements of CarProduction class
   CarProduction C[4];
   
    string s; 
	int qty;
  for(int i=0; i<4; i++)
   {
     cout<<"Enter the plant no#                     : ";
     cin>>s;

    cout<<"Enter the amount of cars produced today  : ";
    cin>>qty;
    C[i].setdata(s, qty);
  }
    cout<<"\n Daily Productivity Report "<<endl;
    for(int i=0; i<4; i++)
    C[i].display_graph();
}
