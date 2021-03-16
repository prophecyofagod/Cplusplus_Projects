//****************************************************************************************************
// Lab Test
// Programmer: Mario Saiz
// Completed: 08/20/2019
// Status: Complete
//
//****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <new>
using namespace std;
    		
int main () {
	int i,n;
	int * p;
	float total=0.0;
	float average =0.0;
  
	cout<<"Number of students surveryed: ";
	cin >> i;
	p= new (nothrow) int[i];
	
	if (p == nullptr)
		cout << "Error: memory could not be allocated";
	else {	
    	cout<<"\n\nNumber of movies each student has watched: ";
		cout<<"\n---------------\n";
		
		for(int n = 0; n < i; n++) {
			do {		
				cout<<"Student "<<(n+1)<<": ";
				cin >> p[n];
		
				if(p[n]<0)
		            cout<<"Invalid entry, try again: \n";
          
				}while(p[n]<0);
			
      		total += p[n];
      		average = (total/i);
      	}

    	cout <<"\n\nYou have entered: ";
    	cout<<"\n---------------\n";
    		for (n=0; n<i; n++)
				cout << p[n] << ", ";
		
		
		cout << fixed << showpoint << setprecision(2);
		cout<<"\n\n\nResult: ";
		cout<<"\n---------------\n";
		cout<<"Average: "<<average;
		delete[] p;
  	}
  	return 0;
}
