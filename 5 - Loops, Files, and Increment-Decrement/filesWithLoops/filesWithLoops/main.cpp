#include <iostream>
#include <fstream>

int main()
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
	std::cout << "Data written to Sales.txt\n";

	return 0;
}

/*OUTPUT
For how many days do you have sales? 3
Enter the sales for day 1: 100
Enter the sales for day 2: 200
Enter the sales for day 3: 300
Data written to Sales.txt

C:\Users\micro\Documents\Programming\Angel\cpp\CIS5\5 - Loops, Files, and Increment-Decrement\filesWithLoops\Debug\filesWithLoops.exe (process 21408) exited with code 0.
Press any key to close this window . . .
*/

/*Sales.txt
100
200
300
*/

