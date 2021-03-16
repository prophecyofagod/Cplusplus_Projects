//****************************************************************************************************
// Lab 6.2
// Programmer: Mario Saiz
// Completed: 07/13/2019
// Status: Complete
//
//****************************************************************************************************


#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
void getData(int *, int);
void selectionSort(int *, int);
double getAvg(int *, int);

int main()
{
	int *Movies, Stud;
	double Avg;

	// Ask user how many students were surveyed.
	cout << "How many students were surveyed? ";
	cin	 >> Stud;

	Movies = new int[Stud];

	getData(Movies, Stud);

	selectionSort(Movies, Stud);

	Avg = getAvg(Movies, Stud);


	cout << "Statistical results for the number of movies\n"
		 << "     college students see in a month.\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Average: " << Avg << endl;

	delete [] Movies;
	Movies = 0;

	return 0;
}

//*******************************************************************************
//                                  getData                                     *
// The function asks the user to enter the survey data and stores it in an      *
// integer array. The size parameter holds the size of the array.               *
//*******************************************************************************
void getData(int *array, int size)
{
	cout << "Enter the number of movies each student has seen in the month.\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Student " << (i + 1) << ": ";
		cin  >> *(array + i);
	}
}

//*******************************************************************************
//                                    selectionSort                             *
// This function performs an ascending-order selection sort on array. The       *
// parameter size holds the number of elements in the array.                    *
//*******************************************************************************
void selectionSort(int *array, int size)
{
	int scan, minIndex, minValue;

	for (int scan = 0; scan < (size - 1); scan++)
	{
		minIndex = scan;
		minValue = *(array + scan);
		for (int i = scan + 1; i < size; i++)
		{
			if (*(array + i) < minValue)
			{
				minValue = *(array + i);
				minIndex = i;
			}
		}
		*(array + minIndex) = *(array + scan);
		*(array + scan) = minValue;
	}
}

//*******************************************************************************
//                                  getAvg                                      *
// This function calculates and returns the average of the values in array. The *
// parameter size holds the number of elements in array.                        * 
//*******************************************************************************
double getAvg(int *array, int size)
{
	double Sum = 0;
	for (int i = 0; i < size; i++)
	{
		Sum += *(array +i);
	}
	return Sum / size;
}


