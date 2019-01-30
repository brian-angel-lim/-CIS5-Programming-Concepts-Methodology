//The main steps of reading and writing files...
#include <iostream>
#include <fstream> //Step 1 - include fstream - a header file that allows file stream. 

void inputFile();
void outputFile();

int main()
{
	//Continue depending on what action you want to do
	inputFile();
	outputFile();

	return 0;
}

//To create a file and write data onto it
void inputFile()
{
	std::ofstream outputFile; //Step 2 - create input file stream object. Make an ofstream if you want to create a file and write data onto it
	
	outputFile.open("C:\\data\\inventory.txt"); //Step 3 - Write directory for where you want to create a file
	//In the above statement, the file inventory.txt is opened and linked with inputFile. 
	
}

//To open an existing file and read data from it
void outputFile()
{
	std::ifstream inputFile; //Step 2 - create output file stream object. Make an ifstream if you want to read from an existing file
}