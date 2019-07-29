#include <iostream>
#include <string>

void voidDisplay(int num1);
void voidCalculate(int &num1);
int returnInt(int num1);
std::string returnString();

int main()
{
	int num1 = 1;
	int num2;

	voidDisplay(num1);
	std::cout << "\n";
	voidCalculate(num1);
	std::cout << "Number 1 is now: " << num1 << "\n";
	num2 = returnInt(num1);
	std::cout << "\n";
	std::cout << "Number 1 is: " << num1 << "\n";
	std::cout << "Number 2 is: " << num2 << "\n";
	std::cout << returnString();

	return 0;
}

void voidDisplay(int num1)
{
	std::cout << "===voidDiplay===\n";
	std::cout << "Number 1 is: " << num1 << "\n";
}

void voidCalculate(int &num1) 
{
	int addNum = 0;

	std::cout << "===voidCalculate===\n";
	std::cout << "Number 1 is: " << num1 << "\n";
	std::cout << "Select a number to add it with: ";
	std::cin >> addNum;
	std::cout << "Number 1 was added by " << addNum << "\n";
	num1 += addNum;
}

int returnInt(int num1)
{
	std::cout << "===returnInt===\n";
	num1 += 1; 
	return num1; 
}

std::string returnString()
{
	std::string message;
	
	std::cout << "===returnString===\n";
	std::cout << "Write a message";
	std::cin >> message;

	return message;
}
