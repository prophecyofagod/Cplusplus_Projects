//****************************************************************************************************
// Lab Chapter 9 #34
// Programmer: Mario Saiz
// Completed: 07/07/2019
// Status: Complete
//
//This lab is for creating a bubble sort of an array that puts them in alphabetical order
//****************************************************************************************************


//header file that includes every standard library
#include<bits/stdc++.h>

//defining a constant 
#define LIST 20 

using namespace std; 

void sortStrings(char arr[][LIST], int n) { 
	char temp[LIST]; 

	//Sorting strings using the bubble-sort method 
	for (int x=0; x<n-1; x++) { 
		for (int i=x+1; i<n; i++) { 
			if (strcmp(arr[x], arr[i]) > 0) { 
				strcpy(temp, arr[x]); 
				strcpy(arr[x], arr[i]); 
				strcpy(arr[i], temp); 
			} 
		} 
	} 
} 

int main() { 
	//this is where the array list of grocery items is stored
	char arr[][LIST] = {"eggplant", "squash", "apples", "hamburger", "pizza", "shampoo", "soap", "laundry detergent", "bacon"}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	//this prints out the list before it's sorted
	printf("Strings in [UNSORTED] Bubble-Sort order: \n"); 
	for (int i=0; i<n; i++) 
		printf("\n %d) %s", i+1, arr[i]); 

	cout<<"\n________________________________________";
	//this sorts the list into alphabetical order using bubble sort
	sortStrings(arr, n); 

	//this prints out the list already sorted
	printf("\n\nStrings in [SORTED] Bubble-Sort order: \n"); 
	for (int i=0; i<n; i++) 
		printf("\n %d) %s", i+1, arr[i]); 
	return 0; 
} 

