#include<iostream>
using namespace std;
class Bags
{
  string brand;
  float height, length, width;
  public:
   
 	void setdata()
	{
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
};

int main()
	{ 
		//need to developed by adding object K, L and M;
		Bags K;
		K.setdata();
		K.display();
		
		Bags L;
		L.display();
		
		Bags M = L;
		M.display();
	}
