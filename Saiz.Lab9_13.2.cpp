//****************************************************************************************************
// Lab Chapter 9, #13 part 2
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

//Binary Search compares the target value to the middle element of the array. 
//If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half
int searchArray(int array[], int size, int value)
{
	int first = 0, last = size - 1, middle,	position = -1;		
	bool search = false;     
 
	while(!search && first <= last)
	{
		middle = (first + last) / 2; 	
	
		if (array[middle] == value)		
		{
			search = true;
			position = middle;
		}
		
		else if (array[middle] > value)  
		{
			last = middle - 1;
		}
		
		else 								 
		{
			first = middle + 1;
		}
	}
	return position;                      
}
