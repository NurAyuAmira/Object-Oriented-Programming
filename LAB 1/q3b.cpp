#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int i;
int numGrid[2][3] = {{10,20,30},{40,50,60}};

cout<<"Row 1 : ";
for(i=0;i<3;i++)
{
	cout<< numGrid[0][i]<<"\t";

}
cout<<endl<<"Row 2 : ";
for(i=0;i<3;i++)
{
	cout<< numGrid[1][i]<<"\t";

}
cout<<"\n\n";
}
