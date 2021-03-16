//****************************************************************************************************
// Lab 7.2
// Programmer: Mario Saiz
// Completed: 07/18/2019
// Status: Complete
//
//This lab is for entering a word with all uppercase, all lowercase or a mixture
//then taking that word, making it all uppercase, all lowercase, and then
//flipping the already uppercase to lowercase, then lowercase to uppercase, and vice versa
//****************************************************************************************************

#include <iostream>
#include <string>
#include <cctype>
#include <string.h>
using namespace std;

const int SIZE = 100;

void upper(char[]);
void lower(char[]);
void flip(char[]);

//main where the user is asked to input a word
//then after the program does its thing
//it spits out uppercase, lowercase, and flip
int main() {

	char word1[SIZE], word2[SIZE], word3[SIZE];

	cout << "Please enter a word: ";
		cin.getline(word1, SIZE);

	strcpy(word2, word1);
	strcpy(word3, word1);

	cout << "\nUppercase: ";
		upper(word1);
			cout << word1 << endl;

			cout << "Lowercase: ";
				lower(word2);
					cout << word2 << endl;

					cout << "Flip: ";
						flip(word3);
							cout << word3 << endl;
								return 0;
}

//this turns every letter uppercase
void upper(char letter[]) {
	int i = 0;
	
	while(letter[i]) {
		letter[i] = toupper(letter[i]);
			i++;
	}
}

//this turns every letter lowercase
void lower(char letter[]) {
	int i = 0;

	while(letter[i]) {
		letter[i] = tolower(letter[i]);
			i++;
	}
}

//this turns any uppercase letter to lowercase
//then turns any lowercase letter to uppercase
//or vice versa
void flip(char letter[]) {
	int i = 0;

	while(letter[i]) {

		if(islower(letter[i]))
			letter[i] = toupper(letter[i]);
		else
			letter[i] = tolower(letter[i]);
				i++;
	}
}
