#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

	int number,i=0;
    int even=0,odd=0,total_numbers=0;
    
    do {
        cout << "Enter a number : ";
        cin >> number;
        i++;
        total_numbers += number;
        
        //check if even/odd
        if(number % 2 == 0) {
            even++;
        }
        else if(number % 2 == 1) {
            odd++;
        }
    } while (i <= 4);
    
    cout << "\nThere are " << even << " even numbers and " << odd << " odd numbers." << endl;
    cout << "The total of all the 10 numbers are " << total_numbers << endl;  
	
}     
