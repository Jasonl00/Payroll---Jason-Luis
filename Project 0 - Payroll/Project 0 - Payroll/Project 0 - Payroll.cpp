// Student: Jason Luis 
// 
// Date: 02/12/2023
// 
// This is the program calculates the user's pay. 
#include <iostream> 
using namespace std;

int main()
{
	double hours, rate, pay;

	// Get number of hours worked. 
	cout << "How many hours did you work? ";

	cin >> hours;

	// Get the hourly pay rate. 
	cout << "\nHow much do you get paid per hour? ";

	cin >> rate;

	//Calculate the pay. 

	pay = hours * rate;

	// Display the pay. 
	cout << "\nYou have earned $" << pay << endl;

	return 0;
}

