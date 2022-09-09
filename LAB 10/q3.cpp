#include <iostream>
using namespace std;
class Number
{	
	 private: int no, index, sample;
	 public:
	 Number ()
	 { 
	   cout<<" NUMBERS :: Let's PLAY "<<endl;
	   cout<<"======================================="<<endl;
	 }
	 
	 //Define SmallestNumb (…) function, pass 3 parameters (numb [ ], element with integer data type and size with integer data type) to this function’s header.
	int SmallestNumb(int numb[], int element, int size)
	{
		//element to index, size to sample and numb[..] to no with element value is set as the array size.
		index = element, sample = size;
		no = numb[element];
		
		/*In this function, use for-loop as a header;
		[Hint: for (int i=element+1; i<size; i++)] in finding the smallest integer from the unsorted list and return the index of the smallest integer.*/
		for(int i=element+1; i<sample; i++)
		{
			
			if(numb[i]<no)
			{
				no = numb[i];
				index = i;
			}
		}		
		return index;
	}
	
	//Define select_Number (…) function, pass 2 parameters (numbers[ ] and size) to this function.
	void select_Number (int numbers[], int size)
	{
		
		int digit, sort;  
		//Use for-loop [Hint: for (int i=0; i<size-1; i++)]  
	for(int i=0; i<size-1; i++)
		{
			//and call SmallestNumb (…) function with initialize this called function as a digit value.
			digit = SmallestNumb(numbers,i, size);
		
			//To get the smallest number, prepare the if (…) condition and perform the swapping.
			if(numbers[digit]<numbers[i])
			{
				sort = numbers[digit];
				numbers[digit] = numbers[i];
				numbers[i] = sort;
			}
			//Display the sequence of elements for each sorting cyclE
			cout<<"\nThe Cycle-"<< i+1 <<" sorting: ";
			for(int j=0; j<size; j++)
			cout<< numbers[j] <<" ";
		}
	}
};
int main()
{
	 Number Nu;
	int *numbers, value;
	cout<<"How many numbers would you like to be sorted : ";
	cin>> value;
	
	//Create a dynamic array named numbers and the size of the array is based on the number to be sorted that entered by user.
	numbers = new int[value];

	//Ask user to enter the numbers to be sorted one by one based on the total numbers he wants to sort (Hint: For user input use the dynamic array has created).
	cout<<"The "<<value<<" numbers are:"<<endl;
	for(int i=0; i<value; i++)
	{
		cin>>numbers[i];
	}
	
	Nu.select_Number(numbers, value);
	
	cout<<"\n\nThe final list of sorted numbers is:\n";
	for(int i=0; i<value; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	delete [] numbers;
	return 0;
}
