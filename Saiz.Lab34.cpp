//****************************************************************************************************
// Lab Project #34
// Programmer: Mario Saiz
// Completed: 07/28/2019
// Status: Complete
//
//****************************************************************************************************


#include <string>
#include<iostream>                       //library needed
using namespace std;					 //Library location

int bubbleSort(char[], char);

int main()									////Driver function header
{
	const int NUM_ELE = 20; 					// variable declaration
	str dB[NUM_ELE] = { "eggplant", "squash", "apples", "hamburger", "pizza", "shampoo", "soap", "laundry detergent", "bacon" };
	int i, moves;
	char temp;


	// title display
	cout<< 	"	This program sort the the 20 elements in alphabetic order"<<endl;

	for(int i = 0; i < NUM_ELE; i++)
		for(int j = 0; j < NUM_ELE-1; j++)
		{
			if(dB[j+1] < dB[j])
			{
				temp = dB[j];
				dB[j] = dB[j+1];
				dB[j+1] = temp;
			}
		}

	for(int i = 0; i < NUM_ELE; i++)
		cout<<dB[i] <<" ";

	return 0;
}
