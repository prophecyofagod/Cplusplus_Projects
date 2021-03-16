//*********************************************************************************************************
// Lab Chapter 8.2
// Programmer: Mario Saiz
// Completed: 07/23/2019
// Status: Complete
//
//This lab is for decrypting the encrypted file from the first part, then storing it
//into another file with the original message being decrypted
//*********************************************************************************************************


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	
	string encrypted, decrypt;
	char c;

	//enter file needing to be decrypted, then name the decrypted file
	cout << "Please enter the file needing to be decrypted: ";
		cin  >> encrypted;


//checks to see if file is found or not, if it isn't, an error message will pop up
	fstream inFile(encrypted, ios::in);
		
		if (!inFile) {
		
			cout << "\nAn error occured trying to open this file: "<<encrypted;
				return 0;
		}

//this is where the file gets decrypted by 
//subtracting 10 to the ASCII code of each character in the file before it is written to the second file
//it restores the information to its original state and is written into another file
	cout << "Please name the decrypted file: ";
		cin  >> decrypt;
			fstream outFile(decrypt, ios::out);

		while (!inFile.fail()) {
			
			inFile.get(c);
				c-=10;
					outFile << c;
		}
	
		inFile.close();
			outFile.close();
				return 0;
	}
