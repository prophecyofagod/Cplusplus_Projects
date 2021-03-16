//****************************************************************************************************
// Lab 3
// Programmer: Mario Saiz
// Completed: 06/14/2019
// Status: Complete
//
//This lab is for determining which of the 4 divisions had the highest sales, and how much they were.
//****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//These are the function prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main() {
	double NE, SE, NW, SW;

	//This is the call function (getSales) for each division
	NE = getSales("Northeast");
	SE = getSales("Southeast");
	NW = getSales("Northwest");
	SW = getSales("Southwest");

	//These are the call functions (findHighest) passing in the totals of each one
	findHighest(NE, SE, NW, SW);
		return 0;
}

//(getSales) function asks how much the divisions made, ensuring that it's a number greater than 0
//if less than 0, it prompts an error message and asks them to try again

double getSales(string Division) {
	double Sales;

	do {
		cout << "Enter the quarterly sales for the " << Division;
    	cout << " division: ";
    	cin  >> Sales;

    	if (Sales < 0.00)
    		cout << "Sales figures cannot be negative. Please re-enter.\n";

    } while (!(Sales > 0.00));
    	return Sales;
}

//(findHighest) uses the previous method (getSales) and puts the numbers entered into respective categories
//then each division has its own value now, and will be forwarded which then gets compared
//once they are compared, the highest number will be outputted

void findHighest(double NE, double SE, double NW, double SW) {
	double Highest_amount;
 
 	cout << "\nThe ";

	if (NE > SE && NE > NW && NE > SW) {
		Highest_amount = NE;
		cout << "Northeast ";
	}
	else if (SE > NE && SE > NW && SE > SW) {
		Highest_amount = SE;
		cout << "Southeast ";
	}
	else if (NW > SE && NW > NE && NW > SW) {
		Highest_amount = NW;
		cout << "Northwest ";
	}
	else {
		Highest_amount = SW;
		cout << "Southwest ";
	}
    
	cout << fixed << setprecision(2);
	cout << "division had the highest sales this quarter. \nTheir sales were $" << Highest_amount << "\n";
}
