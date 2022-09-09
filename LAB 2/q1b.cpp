//Question 1b func pointer 
#include<iostream>
using namespace std;
 
void kineticEnergy(double* kE,double* mass,double* velocity); 

void kineticEnergy(double* kE,double* mass,double* velocity)  //need to put*
 {
   *kE= 0.5 * *mass * *velocity * *velocity ;  //need to put *
 	
 	
 }
 
 
int main ()
{
	double mass, velocity,kE;
	
	cout<<"Enter an object's mass and velocity as required..."<<endl<<endl;
	
	cout<<"Mass in kilograms: ";
	cin>>mass;
	
	cout<<"Velocity in meters per second: ";
	cin>>velocity;
	
	//call func
    kineticEnergy(&kE, &mass, &velocity); //need to put & in call func
    
	cout<<endl<<endl<<"The kinetic energy of this object is "<< kE <<" joules.";
	
	return 0;
 } 
