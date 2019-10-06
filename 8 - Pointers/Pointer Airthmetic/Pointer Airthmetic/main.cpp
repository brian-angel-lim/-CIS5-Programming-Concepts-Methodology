#include <iostream>

int main()
{
	const int SIZE = 8;
	int set[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int *numPtr = nullptr;
	int count;

	//Make numPtr point to the set array
	numPtr = set;

	//Use the pointer to display the array contents
	std::cout << "The numbers in set are:\n";
	for (count = 0; count < SIZE; count++)
	{
		std::cout << *numPtr << " ";
		numPtr++;
	}

	//Display the array contents in reverse order
	std::cout << "\nThe numbers backwards are:\n";
	for (count = 0; count < SIZE; count++)
	{
		numPtr--;
		std::cout << *numPtr << " ";
	}

	return 0;
}