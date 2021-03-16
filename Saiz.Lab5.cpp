//****************************************************************************************************
// Lab 5
// Programmer: Mario Saiz
// Completed: 06/30/2019
// Status: Complete
//
//This lab is for using input for each month on how much it rained, 
//then calculating the lowest, highest, total, and average.
//****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Create Water class
class Water{
private:
    //private Array for water consumption for a monthly basis
    double monthlyUse[12];
  
public:
    //public Array containing months
    string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  
    //Methods and also printYear
    void printYear(){
        int year;
        cout << "\nEnter the year for water consumption data: ";
        cin >> year;
      
        //Making sure year is between 2005 and 2020
        while(year < 2005 || year > 2020){
            cout <<"\nYear must be between 2005 and 2020. Please enter a valid year: ";
            cin >> year;
        }
        cout << "\n\nPlease enter the water consumption amounts for each of the months in Centum Cubic Feet (CCF):\n" << endl;
      
        //Call the method getData 
        getData();
      
        //Year output
        cout <<"\n\n\t\t" << year <<" Water Consumption Report for Paris, Texas" <<"\n"<< endl;
        cout << "Month\t\tConsumption in CCF" << endl;
        cout << "---------------------------------------" << endl;
};
    //Getting data for each of the 12 months
    void getData(){
        for(int i=0; i<12; i++){
            cout << setw(9) << left << "Enter water consumption in CCF for " << monthName[i] << ": \t";
            cin >> monthlyUse[i];
          
            //Validate amount
            while(monthlyUse[i] < 0){
                cout << "\nConsumption amounts cannot be negative. Try Again.\n"<< endl;
                cout << setw(9) << left << "Enter water consumption in CCF for " << monthName[i] << ": \t";
                cin >> monthlyUse[i];
            }  
        }
        //Separating data input and data output 
        cout << endl;
    }
    //data for each month
    void displayData(){
        for(int i=0; i<12; i++){
            cout << setw(9) << left << monthName[i] << "\t\t";
            cout << monthlyUse[i] << endl;
        }
        cout << endl;
    }
    //total water consumption
    void totalAndAvg(){
        double sum=0;
        for(int i=0; i<12; i++){
            sum += monthlyUse[i];
        }
        //total and average
        cout << "The total consumption for the year: " << sum << " CCF"<< endl;
        cout << "The average consumption for the year: " << sum/12 << " CCF"<< endl;
    }
    //Lowest Water Usage
    void lowest(){
        int min=0;
        for(int i=1; i<12; i++){
            if(monthlyUse[i]<monthlyUse[min])
                min=i;
        }
        cout << "\nThe lowest consumption was in " << monthName[min] << " with " << monthlyUse[min] << " CCF." <<endl;
    }
    //Highest Water Usage
    void highest(){
        int max=0;
        for(int i=1; i<12; i++){
            if(monthlyUse[i]>monthlyUse[max])
                max=i;
        }
        cout << "The highest consumption was in " << monthName[max] << " with " << monthlyUse[max] << " CCF." <<endl;
    }
};

int main() {

    Water water;
    char again;

    cout << "City of Paris, Texas Annual Water Consumption Data Collection" << endl;
  
    water.printYear();
    water.displayData();
    water.lowest();
    water.highest();
    water.totalAndAvg();
  
    return 0;
}
