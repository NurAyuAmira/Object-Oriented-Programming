#include <iostream>
using namespace std;

int main()
{  
	int arr1[] = {2,4,6,8}, arr2[4];
	
	
	for(int i=0;i<4;i++)
	{
		//--------(i)Write C++ statements to divide the values of all elements in array arr1 by 2--------
		arr2[i]=arr1[i]/2;
		
		//--------(ii)Write C++ statements to display all the data stored in array arr2---------
		cout<<arr2[i]<<" ";
	}
		
	
}
