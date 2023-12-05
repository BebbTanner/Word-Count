/*This program should tell the user the exact word count 
from a text file.*/
#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
	using namespace std;

	ifStream inputStream;

	char inputFileName[16];

	cout << "Enter a file name: ";
	cin >> inputFileName;

	inputStream.open(inputFileName);
	if (inputStream.fail)
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

	inputStream.close;

	return 0;

}