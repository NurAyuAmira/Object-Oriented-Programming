//Question 2a
#include<iostream>
using namespace std;

void get_a_b_c(double &a, double &b, double &c);
double bb_4ac( );

void get_a_b_c(double &a, double &b, double &c)
  {
  	cout<<"Enter a, b and c:";
  	cin>>a>>b>>c;
  }
  
  
double bb_4ac( )
 { 
   double a, b, c; // Coefficients of a quadratic equation 
   get_a_b_c(a, b, c);
   return b*b - 4*a*c;
   
 }


int main()
{
 double disc;
 
 disc=bb_4ac( );
 
 cout<<"The discriminant is "<<disc;
 
 return 0;

} 
