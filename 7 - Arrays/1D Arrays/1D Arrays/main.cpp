#include <iostream>

int main()
{
	int array1[5] = { 1, 2, 3, 4, 5 };
	int array2[5];
	
	std::cout << "This is array1: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << array1[i] << " ";
	}

	std::cout << "\n";

	std::cout << "Please input 5 values for array 2:\n";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> array2[i];
	}


	std::cout << "\nHere is array 2: ";
	//Range-based for loop - the value of val is the element size of array2
	for (int val : array2)
		std::cout << val << " "; 

	return 0;
}