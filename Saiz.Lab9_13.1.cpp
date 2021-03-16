//****************************************************************************************************
// Lab Chapter 9, #13 part 1
// Programmer: Mario Saiz
// Completed: 07/07/2019
// Status: Complete
//
//This lab is for looking through an array and comparing the input to see if the numbers match
//if the match, then the person has a winning lottery number
//****************************************************************************************************

#include <iostream>
using namespace std;

int searchArray(int [], int, int);
const int NUMS = 10;

int main()
{
	//contains the winning numbers
	int Ticket[NUMS] = { 13579, 26791, 26792, 33445, 55555, 
							62483, 77777, 79422, 85647, 93121 };

	int winner, result; 		

	//enter the numbers and then will be checked
	cout << "Please enter the five-digit number: ";
	cin  >> winner;
	
	//check if the numbers inputted are the winning numbers
	result = searchArray(Ticket, NUMS, winner);

	//a statement will print out stating whether or not they got the winning numbers
	if (result == -1)
		cout << "Sorry, you didn't win this week. Try again next week!\n"<<endl;
	else
		cout << "Congratulations, you won!"<<endl;
	return 0;
}

//Linear Search where it goes one by one comparing to the inputted numbers
int searchArray(int array[], int size, int value)
{
	int i = 0;			
	int position = -1;		
	bool search = false;		

	while (i < size && !search)
	{
		if (array[i] == value)	
		{
			position = i;	
			search = true;			
		}
		i++;					
	}
	return position;	
}

