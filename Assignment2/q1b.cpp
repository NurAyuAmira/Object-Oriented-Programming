#include<iostream>
using namespace std;

float calculate(float*);

//------------(i)Define the struct named orange with elements : weight (float) and cost (float). --------
struct orange
{
	float weight;
	float cost;
};

int main()
{     
	struct orange ob;
	cout<<"Enter the weight(Gram) of the orange : ";
	cin>>ob.weight;

	//--------------(ii)Call a function calculate(…) and pass ob’s weight by using reference as parameter to calculate the cost of orange.------------
	ob.cost=calculate(&ob.weight);

	cout<<"Cost for "<<ob.weight<<" gram is RM "<<ob.cost;
}

//-------------------------(iii)Write a function header calculate(…) that has return data type float and a pointer parameter weight.-------------------
float calculate(float *weight)
{
	//-----------------------(iv)Calculate the cost based on the formula given below and return the cost value [Cost = weight * 0.02]---------------
	float cost;
	cost=*weight *0.02;
	return cost;
}
