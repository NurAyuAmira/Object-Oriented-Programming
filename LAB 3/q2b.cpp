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
  
  //accessor method
  int getWidth( )
  {
  	return width;
  }
  int getLength ()
  {
  	return length;
  }
  int getHeight ()
  {
  	return height;
  }
  int getVolume ()
  {
  	return volume;
  }
  
  
  /*void display()
  {
  	cout<<endl<<"-----Display Cuboid Data-----";
  	cout<<endl<<"Width  : "<<width<<" cm"<<endl;
  	cout<<"Length : "<<length<<" cm"<<endl;
  	cout<<"Height : "<<height<<" cm"<<endl;
  	cout<<"Volume : "<<volume<<" cm^3"<<endl;
  }*/
};

int main()
{ 
  Cuboid Q;
  //call func
  Q.setdata();
  Q.findVolume();
    //accessor method
  	cout<<endl<<"-----Display Cuboid Data-----"<<endl;
  	cout<<"Width        : "<<Q.getWidth()<<" cm"<<endl;
  	cout<<"Length       : "<<Q.getLength()<<" cm"<<endl;
  	cout<<"Height       : "<<Q.getHeight()<<" cm"<<endl;
  	cout<<"Volume       : "<<Q.getVolume()<<" cm^3"<<endl;
  // Q.display();
  return 0;
}
