//*********************************************************************
// Lab 1.14
// Programmer: Mario Saiz
// Completed: 05/31/2019
// Status: Complete
//
//This lab is for converting inches to feet+inches with a formula
//then adding the variables to a sentence.
//*********************************************************************

#include<iostream> //input/output declarations
using namespace std;

int main() {
	
	//inches = inch %12 (what I will use to convert the 74 into inches)
	//feet = inch/12 (what I will use to convert the 74 into feet)
	
	int a = 74; //starting integer of 74 (inches)
	float b = 74%12; //converting the 74 inches into remaining inches after dividing by 12
	float c = 74/12; //converting the 74 inches into feet without remainders
	
	cout<<"A " <<a<< " inch tall basketball player is " <<c<< " feet and " <<b<< " inches tall."; //putting the formulas, plus variables into a sentence to convert 74 inches to 6 feet 2 inches
	
	return 0;
	
};
