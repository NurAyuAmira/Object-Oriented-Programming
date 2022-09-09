#include<iostream>
using namespace std; 

class Cuboid
{
  int length, width, height, volume; //private

  public:
  void setdata()
  {
  	cout<<"Enter the width, length, height of a Cuboid object : ";
  	cin>>width>>length>>height;
  	
  }
  void findVolume()
  {
  	volume=width*length*height;
  }
  void display()
  {
  	cout<<endl<<"-----Display Cuboid Data-----";
  	cout<<endl<<"Width  : "<<width<<" cm"<<endl;
  	cout<<"Length : "<<length<<" cm"<<endl;
  	cout<<"Height : "<<height<<" cm"<<endl;
  	cout<<"Volume : "<<volume<<" cm^3"<<endl;
  }
};

int main()
{ 
  Cuboid Q;
  //call func
  Q.setdata();
  Q.findVolume();
  Q.display();
  return 0;
}
