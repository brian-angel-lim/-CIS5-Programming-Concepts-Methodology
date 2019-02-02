//code that tests whether the open member function has succesfully opened a designated file. There is a file in this folder named File.txt
#include <iostream>
#include <fstream>
#include <string>


void altMethod();

int main()
{
	std::ifstream inputFile;
	int number;
	std::string filename;

	std::cout << "Input file name to open: ";
	std::cin >> filename;

	inputFile.open(filename);

	//tests if file opened. if it opens, it outputs the message. If not, terminal desplays error message.
	if (inputFile)
	{
		while (inputFile >> number)
		{
			std::cout << number << "\n";
		}
		
		inputFile.close();
	}
	else
	{
		std::cout << "Error opening the file\n";
	}
	

	return 0;
}

//alternative method using inputFile.fail() member function; essentially tests for open failure first, then outputs contents if file was opened
void altMethod()
{
	std::ifstream inputFile;
	int number;
	std::string filename;

	if (inputFile.fail())
	{
		std::cout << "Error opening the file!\n";
	}
	else
	{
		while (inputFile >> number)
		{
			std::cout << number << "\n";
		}

		inputFile.close();
	}


}

/*Output with error (Files.txt not present):
Input file name to open: Sales.txt
Error opening the file

C:\Users\micro\Documents\Programming\Angel\cpp\CIS5\5 - Loops, Files, and Increment-Decrement\testingForFileError\Debug\testingForFileError.exe (process 4612) exited with code 0.
Press any key to close this window . . .

*/

/*Output w/o error (Files.txt present):
Input file name to open: Files.txt
1
2
3

C:\Users\micro\Documents\Programming\Angel\cpp\CIS5\5 - Loops, Files, and Increment-Decrement\testingForFileError\Debug\testingForFileError.exe (process 12552) exited with code 0.
Press any key to close this window . . .


*/