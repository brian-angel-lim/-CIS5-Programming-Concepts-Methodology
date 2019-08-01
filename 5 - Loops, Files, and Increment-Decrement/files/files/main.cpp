//The main steps of reading and writing files...
#include <iostream>
#include <string>
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

	outputFile.open("names.txt"); //Step 3 - Write directory for where you want to create a file
	//In the above statement, the file names.txt is opened so data can be written onto it

	//Step 4a - Write data into file 
	std::string item1 = "joe";
	std::string item2;

	std::cout << "Item 1 will now be placed into the file.\n";
	outputFile << item1 << "\n";

	std::cout << "Please input Item 2: ";
	std::cin >> item2;
	outputFile << item2;

	//Step 5 - Close the file
	outputFile.close();
	
}

//To open an existing file and read data from it
void outputFile()
{
	std::ifstream inputFile; //Step 2 - create output file stream object. Make an ifstream if you want to read from an existing file

	inputFile.open("names.txt"); //Step 3 - write directory for file you wish to read
	//In the above statement, names.txt is opened so data can be read by the compiler

	std::string item1, item2;
	//Step 4 - Read the data (by first reading it onto a variable and then displaying the variable)
	inputFile >> item1;
	std::cout << "The first name is: " << item1 << "\n";
	inputFile >> item2;
	std::cout << "The second name is: " << item2 << "\n";

	//Step 5 - Close the file
	inputFile.close();
	std::cout << "Thank you come again!\n\n";

}