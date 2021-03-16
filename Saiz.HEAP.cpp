//****************************************************************************************************
// Lab 6
// Programmer: Mario Saiz
// Completed: 07/13/2019
// Status: Complete
//
//This lab is to ask how many students were surveyed, then ask how many movies each has watched
//after doing that, we calculate the average, median and mode of all the movies.
//****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

//number of movies each student has seen
//a loop for input validation 
void getData(int *movies, int students) {
  	int i;
  		
  	cout<<"\n\nEnter number of movies each student has watched: ";
	cout<<"\n------------------\n";
	
	for(int i = 0; i < students; i++) {
		
		do {
		
		cout<<"Student "<<(i+1)<<": ";
		cin >> movies[i]; 
		
			if(movies[i]<0)
                cout<<"Invalid entry, try again: \n";
          
		}while(movies[i]<0);
		
	}
}
//heap sort check
void heapify(int *&num, int students, int i)  { 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
	    // If left child is larger than root 
	    if (l < students && *&num[l] > *&num[largest]) 
	        largest = l; 
	  
	    // If right child is larger than largest 
	    if (r < students && *&num[r] > *&num[largest]) 
	        largest = r; 
	  
	    // If largest is not root 
	    if (largest != i) { 
	        swap(*&num[i], *&num[largest]); 
	  
	        // heapify the sub-tree 
	        heapify(*&num, students, largest); 
    	} 
	} 
//heap sort
void heapSort(int *&num, int students) {
  // rearrange array 
    for (int i = students / 2 - 1; i >= 0; i--) 
        heapify(*&num, students, i); 
  
    //extract an element from heap individually 
    for (int i=students-1; i>=0; i--) { 
        // Move current root to end 
        swap(*&num[0], *&num[i]); 
  
        //max heapify on reduced heap 
        heapify(*&num, i, 0); 
    } 
} 
//average
float average(int *movies, int students) {
  int total = 0;
  	for(int i = 0; i < students; i++) {
    	total += movies[i];
  	}
  	return((float)total / students);
}
//median
float median(int *movies, int students) {
	int index;
		if(students % 2 == 1) {
    		index = (students + 1) / 2;
    		return((float)movies[index - 1]);
  		}
  		else {
		    index = (students / 2);
		    return((float)(movies[index - 1] + movies[index]) / 2);
  		}
	}
//mode
int mode(int *movies, int students, int largest) {
int *counter;
int currentNum;
int mode = 0;
 
	if(students == 1) 
		return movies[0]; 
		counter = new int[largest + 1];
	for (int i = 0; i < largest; i++)
		counter[i] = 0;
  
//increases each index in the counter array
	for (int i = 0; i < students; i++) {
		currentNum = movies[i];
		counter[currentNum]++;
	}
  
//compares all the values in the counter array to find out which is the highest frequency
	for (int i = 0; i < largest; i++) {
		if (counter[i] > counter[mode]) {
			mode = i;
		}
	}
	return mode;
}
//final results
void printResults(int *movies, int students) {
	cout<<"\n\nResults: ";
	cout << fixed << showpoint << setprecision(2);
	cout<<"\n------------------\n";
	cout << "Average: " << average(movies, students) << endl;
	cout << "Median: " << median(movies, students) << endl;
	cout << "Mode: " << mode(movies, students, movies[students - 1]) << endl;
}
//main
int main() {
  int students;
  int *movies;
  
//ask the user how many students were surveyed and (dynamically) allocate an array of that size
//a loop for input validation 
	do {
		cout << "Enter the number of students/people surveyed: ";
		cin >> students;
	} while(students<=0);
  
	movies = new int[students]; 
	getData(movies, students);
	heapSort(movies, students);
	printResults(movies, students);
  
	delete []movies; //deallocates the memory
		system("pause");
			return 0;
}
