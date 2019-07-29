//C++ allows developers to assign the same name to multiple functions as long as their parameter lists are different
#include <iostream>

int square(int);
double square(double);

int main()
{
	int userInt;
	double userFloat;

	std::cout << "Enter an int: ";
	std::cin >> userInt;
	std::cout << "\n";

	std::cout << "Enter a double: ";
	std::cin >> userFloat; 

	std::cout << "Square of int: " << square(userInt) << "\n";
	std::cout << "Square of double: " << square(userFloat) << "\n";

	return 0;
}

int square(int number)
{
	return number * number;
}

double square(double number)
{
	return number * number;
}