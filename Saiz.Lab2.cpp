//*********************************************************************************************
// Lab 2
// Programmer: Mario Saiz
// Completed: 06/09/2019
// Status: Complete
//
//This lab is for getting discounts (20-50%) on the amounts purchased only if it's 10 or more.
//*********************************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    //CONSTANT
    const double PACKAGE_PRICE = 199.0;

    //VARIABLE
    int units_sold,
        amount_without_discount;

    //Ask for number of units they're wanting to get
    cout << "How many units are being purchased? ";
    cin >> units_sold;

    //Total cost amount before discount
    amount_without_discount = (units_sold * PACKAGE_PRICE);
	cout << setprecision(2) << fixed; //two decimal figures

    //Compute total cost of the purchase.
    //Decide what discount depending on amount purchased.
    if (units_sold >= 0 && units_sold <= 9)
    {
        cout << "The total cost of the purchase is $"  
             << amount_without_discount << endl;
    }
    else if (units_sold >= 10 && units_sold <= 19)
    {
        cout << "The total cost of the purchase is $" 
             << (amount_without_discount - (amount_without_discount * .20)) // 20% discount
             << endl;
    }
    else if (units_sold >= 20 && units_sold <= 49)
    {
        cout << "The total cost of the purchase is $"  
             << (amount_without_discount - (amount_without_discount * .30)) // 30% discount
             << endl;
    }
    else if (units_sold >= 50 && units_sold <= 99)
    {
        cout << "The total cost of the purchase is $" 
             << (amount_without_discount - (amount_without_discount * .40)) // 40% discount
             << endl;
    }
    else if (units_sold >= 100)
    {
        cout << "The total cost of the purchase is $"   
             << (amount_without_discount - (amount_without_discount * .50)) // 50% discount
             << endl;
    }
    else
    {
        cout << "ERROR! Please try again."
             << endl;
    }
    cout << endl;

    return 0;
}
