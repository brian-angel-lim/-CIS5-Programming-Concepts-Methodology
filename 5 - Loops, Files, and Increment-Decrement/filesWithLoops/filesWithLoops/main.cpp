#include <iostream>
#include <fstream>

void writeLoop();
void readLoop();

int main()
{
	writeLoop();
	readLoop();

	return 0;
}

void writeLoop()
{
	std::ofstream outputFile;
	int numberOfDays = 0;
	double sales;

	std::cout << "For how many days do you have sales? ";
	std::cin >> numberOfDays;

	outputFile.open("Sales.txt");

	for (int i = 1; i <= numberOfDays; i++)
	{
		std::cout << "Enter the sales for day "
			<< i << ": ";
		std::cin >> sales;

		outputFile << sales << "\n";
	}

	outputFile.close();
	std::cout << "Data written to Sales.txt\n\n";
}

void readLoop()
{
	std::ifstream inputFile;
	int num;

	std::cout << "Here is what Sales.txt reads: \n";
	inputFile.open("Sales.txt");

	while (inputFile >> num) //while data from the inputFile is being read and assigned to num based on data on file's read position
	{
		std::cout << num << "\n";
	}

	inputFile.close();
	std::cout << "\n";
}

/*OUTPUT
For how many days do you have sales? 3
Enter the sales for day 1: 100
Enter the sales for day 2: 200
Enter the sales for day 3: 300
Data written to Sales.txt

Here is what Sales.txt reads:
100
200
300


C:\Users\micro\Documents\Programming\Angel\cpp\CIS5\5 - Loops, Files, and Increment-Decrement\filesWithLoops\Debug\filesWithLoops.exe (process 16348) exited with code 0.
Press any key to close this window . . .


*/

/*Sales.txt
100
200
300
*/

