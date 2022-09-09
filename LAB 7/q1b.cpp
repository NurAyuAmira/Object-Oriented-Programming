#include<iostream>
using namespace std;
class Bags
{
  string brand;
  float height, length, width;
  public:
   
 	void setdata()
	{
		fflush(stdin);
   		cout<<"Enter your bag's brand name : ";
   		getline(cin, brand);
   		cout<<"Enter value length , width and height of your bag L, W, H ";
   		cin>>length>>width>>height;
	}
	void display()
	{
		cout<<"\nYour brand bag name is **"<<brand<<"** and the dimensions are: "
		<<length<<"L "<<width<<"W "<<height<<"H "<<endl;
	}
	
    //copy constructor
	Bags (const Bags &Bi)
	{
		brand = Bi.brand;
		length = Bi.length;
		width = Bi.width;
		height = Bi.height;
		cout<<"\nDo you have the same bag??"<<endl;
	}
    
    //default constructor
   	Bags()
	{
		brand = "Adidas";
		length = 35;
		width = 20;
		height = 45;
	}
	
	friend void check(Bags a,Bags b, Bags c)
   	{
	if(a.height == b.height && a.height == c.height)
		cout<<" Common height for all 3 bags"<<endl;
	else
		cout<<" --Not all bags have the same heights-- "<<endl;
	}	
};
    


int main()
	{ 
	  Bags B[3];
	  
	  for(int i=0;i<3;i++)
	  {
	   	B[i].setdata();
	  }
	   check(B[0],B[1],B[2]);
	   
	 
	}
