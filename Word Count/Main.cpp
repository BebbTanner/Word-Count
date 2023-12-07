/*This program should tell the user the exact word count 
from a text file. I am unsure if I am supposed to provide that file
or if the user can just create the file.

ok so, it kinda works. Everything is implementing correctly but, I am unsure
if I need to create a text file or allow the user to create one.*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	using namespace std;

	ifstream inputStream;

	char inputFileName[16];

	cout << "Enter a file name: ";
	cin >> inputFileName;

	inputStream.open(inputFileName);
	if (inputStream.fail())
	{
		cout << "input file opening has failed.";
		exit(1);
	}

	int numberOfWords = 0;
	string words;

	while (inputStream >> words)
	{
		++numberOfWords;
	}

	cout << "the file contains " << numberOfWords << " words.";

	inputStream.close();

	return 0;

}