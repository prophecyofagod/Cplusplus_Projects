//****************************************************************************************************
// Lab 4
// Programmer: Mario Saiz
// Completed: 06/23/2019
// Status: Complete
//
//This lab is for getting the input from user on population, deaths, and births, then determining
//the rates of population, birth, and death.
//****************************************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

//creating a class named pop which stores private and public variables (ints and doubles)
class Pop{

//can only be used when called upon
private:
int population;
int births;
int deaths;

//general variables that can be used whenever
public:
void setPopulation(int);
void setBirths(int);
void setDeaths(int);

int getPopulation();
double getBirthRate();
double getDeathRate();
	 
//this is the class Pop, where we set the population, births, and deaths
Pop():population(0), births(0), deaths(0) {}
};
void Pop::setPopulation(int p){

		population = p;
}
void Pop::setBirths(int b){

		births = b;
}
void Pop::setDeaths(int d){

		deaths = d;
}
//after setting all 3 up, we are able to return total population, and stats for birth and death rate
int Pop::getPopulation(){
	return population;
}
double Pop::getBirthRate(){
	return births/static_cast<double>(population);
}
double Pop::getDeathRate(){
	return deaths/static_cast<double>(population);
}
//this is the main, where the questions are asked and stored, the filtered through the class for the output
int main(){
	Pop  town;            
	int  numPeople;
	int  numBirths;  
	int  numDeaths;
	
//this is where we ask the user for total population, births, and deaths.
//if population is less than 2, we use 2 as default, and if births/deaths are less than 0
//then they use the default 0
	
	cout << "Enter total population: ";
	cin  >> numPeople;
		while (numPeople < 2){
		numPeople=2;
		}
		town.setPopulation(numPeople); 

	cout << "Enter annual number of births: ";
	cin  >> numBirths;
		while (numBirths < 0){   
		numBirths=0;
		}
		town.setBirths(numBirths); 
		   
	cout << "Enter annual number of deaths: ";
	cin  >> numDeaths;
		while (numDeaths < 0){  
		numDeaths=0;
		}
		town.setDeaths(numDeaths);

//this returns the stats for each one; population, births, and deaths.
	cout << "\nPopulation Statistics\n  ";        
	cout << fixed << showpoint  << setprecision(3);
	cout << "\n\tPopulation:  " << setw(7) << town.getPopulation();
	cout << "\n\tBirth Rate:  " << setw(7) << town.getBirthRate();
	cout << "\n\tDeath Rate:  " << setw(7) << town.getDeathRate() << endl;
	 
	 return 0;
}
