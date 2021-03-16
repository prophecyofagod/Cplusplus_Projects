//*********************************************************************************************************
// Lab Chapter 8.1
// Programmer: Mario Saiz
// Completed: 07/23/2019
// Status: Complete
//
//This lab is for encrypting a written file, and storing it in another text file
//the new file will have the encrypted message
//*********************************************************************************************************


#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	string fileName, encrypt;
	char c;

	//enter file needing to be encrypted, then name the encrypted file
	cout << "Please enter the file needing to be encrypted: ";
		cin  >> fileName;
			cout << "Please name the encrypted file: ";
				cin  >> encrypt;

//checks to see if file is found or not, if it isn't, an error message will pop up
	fstream inFile(fileName, ios::in);
		
		if (!inFile) {
			
			cout << "\nAn error occured trying to open this file: "<<fileName;
				return 0;
		}

//this is where the file gets encrypted by 
//adding 10 to the ASCII code of each character in the file before it is written to the second file
	fstream outFile(encrypt, ios::out);

		while (!inFile.fail()) {
			
			inFile.get(c);
				c+=10;
					outFile << c;
		}
	
		inFile.close();
			outFile.close();
				return 0;
	}

