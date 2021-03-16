//****************************************************************************************************
// Lab 6
// Programmer: Mario Saiz
// Completed: 07/14/2019
// Status: Complete
//
//This lab is to ask how many students were surveyed, then ask how many movies each has watched
//after doing that, we output the array in order and then we calculate the average of all the movies.
//****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <algorithm>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//number of movies each student has seen
//a loop for input validation 
void getInfo(int *movies, int students) {
  	int i;
  		
  	cout<<"\n\nNumber of movies each student has watched: ";
	cout<<"\n------------------------------------------\n";
	
	for(int i = 0; i < students; i++) {
		do {
		
		cout<<"Student "<<(i+1)<<": ";
		cin >> movies[i]; 
		
			if(movies[i]<0)
                cout<<"\nERROR! Invalid entry, try again! \n";
          
		}while(movies[i]<0);
	}
}
//I used bubblesort because it was the easiest. 
//I attempted heap sort but it crashed the whole program
//so I just went with bubble sort
void bubbleSort(int *&movienum, int students) {
	int i, j, flag = 1;    
	int temp;            
	int movienumLength = students; 
  
	for(i = 1; (i <= movienumLength) && flag; i++) {
		flag = 0;
			for (j=0; j < (movienumLength -1); j++) {
      			if (movienum[j+1] < movienum[j]) { 
			        temp = movienum[j];          
			        movienum[j] = movienum[j+1];
			        movienum[j+1] = temp;
			        flag = 1;             
      		}
    	}
  	}
}
void printArray(int *&movienum, int size) { 
    int i; 
    
	for (i=0; i < size; i++) 
        printf("\n%d ", movienum[i]); 
    	printf("\n"); 
} 
//average
float average(int *movies, int students) {
	float total = 0.0;
	float average=0.0;
  	
	for(int i = 0; i < students; i++) {
    	total += movies[i];
	}
  	average = (total/students);
  		return average;
}
//final results
void printResults(int *movies, int students) {
	cout<<"\n\nResult: ";
	cout << fixed << showpoint << setprecision(2);
	cout<<"\n---------------\n";
	cout << "Average: " << average(movies, students) << endl;
}
//main
int main() {
  int *movies;
  int students;
//ask the user how many students were surveyed and (dynamically) allocate an array of that size
//a loop for input validation 
	do {
		cout << "Number of students surveyed: ";
		cin >> students;
		
		if(students<=0 )
            cout<<"\nERROR! Invalid entry, try again! \n";
  		
	} while(students<=0 );
  
	movies = new int[students]; 
	getInfo(movies, students);
	bubbleSort(movies, students);
	printf("\n\nNumber of movies watched: "); 
	cout<<"\n-------------------------\n";
    printArray(movies, students); 
	printResults(movies, students);
 
  
	delete []movies; //deallocates the memory
		return 0;
}
