//*********************************************************************************************************
// Lab Chapter 7.1
// Programmer: Mario Saiz
// Completed: 07/18/2019
// Status: Complete
//
//This lab is for turning a sentence that has no spaces and the first letter of each word being uppercase
//into a sentence with spaces, and only the first letter of the first word being uppercase
//*********************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

//takes in an int and string of a word
main() {

	string words;
	int x;

//enter the word user would like to use
	cout<<"Please enter a sentence without spaces, and"
	<<"\nwith the first letter of each word being uppercase: ";
		cin>>words;

	x=1;

//this will leave the first letter of the first word uppercase
//but will then seperate each word with a space and replace
//the following uppercase letters to lowercase
	while(x<words.length()) {  
  
  		if(isupper(words.at(x))) {  

   			words.insert(x," ");
   				words.at(x+1)=tolower(words.at(x+1));
  		}
  	x++;
}

//the final result is printed
	cout<<"\n\nResult: "<<words<<endl;
		return 0;
}
