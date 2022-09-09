//Question 1a
#include<iostream>
using namespace std;
 
 double kineticEnergy(double mass ,double velocity );

 double kineticEnergy(double mass,double velocity)
 {
 	double kineticEnergy= 0.5 * mass * velocity * velocity ;
 	
 	return kineticEnergy;
 }
 
int main ()
{
	double mass, velocity;
	
	cout<<"Enter an object's mass and velocity as required..."<<endl<<endl;
	
	cout<<"Mass in kilograms: ";
	cin>>mass;
	
	cout<<"Velocity in meters per second: ";
	cin>>velocity;
	
	cout<<endl<<endl<<"The kinetic energy of this object is "<< kineticEnergy(mass,velocity) <<" joules.";
	
	return 0;
 } 
