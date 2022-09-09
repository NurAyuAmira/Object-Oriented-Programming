#include<iostream>
using namespace std;

class NumberGame
{ 
  int array[5];
  public:
  //----------- (a)----------- default constructor
  NumberGame()
  {
  	array [0] =15;
  	array [1] =20;
  	array [2] =33;
  	array [3] =38;
  	array [4] =100;
  }
  friend void search(NumberGame , int*);
};

  //----------- (b)-----------
  void search(NumberGame G, int*x)
  {
  	int i=0, found =-1;
  	
  	do
  	{
  		if(G.array[i]==*x)
  		{
  			found =i;
  			break;
		  }
		  i++;
	  }while(i<5);
	
	if(found !=-1)
	{
		cout<<*x<<" is found ! "<<endl;
	}
	else
	{
		cout<<*x<<" is NOT found !"<<endl;
	}
  	
  }

int main()
{  
    NumberGame G ;
    int num;
    cout<<"Enter a number :";
    cin>>num;
    search(G, &num);
    return 0;
}
