//**************************************************************************
// Lab 1.13
// Programmer: Mario Saiz
// Completed: 05/31/2019
// Status: Complete
//
//This lab is for using the Annual base salary number of 39000 and then
//figuring out how much this person's gross bi-monthly and gross bi-weekly.
//**************************************************************************

#include<iostream> //input/output declarations
using namespace std;

int main() {
	
	int a = 39000; //starting integer of 39000 (annual gross salary).
	int b = (a/24); //dividing the annual gross salary by 24 to get a bi-monthly amount
	int c = (a/26); //dividing the annual gross salary by 26 to get a bi-weekly amount
	
	cout <<"Annual gross salary:		  $" << a; //prints out a sentence + variable of the annual gross salary
	cout <<"\nGross pay per bi-monthly paycheck $" << b; //prints out a sentence + variable of the bi-monthly gross salary
	cout <<"\nGross pay per bi-weekly  paycheck $" << c; //prints out a sentence + variable of the bi-weekly gross salary
	return 0;
	
	};
