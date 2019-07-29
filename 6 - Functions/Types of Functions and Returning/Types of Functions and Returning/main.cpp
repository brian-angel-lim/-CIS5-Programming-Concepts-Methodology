#include <iostream>
#include <string>

void voidDisplay(int num1);
void voidCalculate(int &num1);
int returnInt(int num1);
std::string returnString();

int main()
{
	std::string message;
	int num1 = 1;
	int num2;

	//Void is used for displaying messages
	voidDisplay(num1);
	std::cout << "\n";
	
	//Void can also be used to change the value of variables when it is passed using & (passing by reference)
	std::cout << "\n";
	voidCalculate(num1);
	std::cout << "Number 1 is now: " << num1 << "\n";

	//Return-type functions can return the result of calaculations as opposed to just the value in variables
	std::cout << "\n";
	num2 = returnInt(num1);
	std::cout << "Number 1 is: " << num1 << "\n";
	std::cout << "Number 2 is: " << num2 << "\n";

	//Return-type functions can be any data type
	std::cout << "\n";
	message = returnString();
	std::cout << "Your message was: " << message;

	std::cout << "\n\n";
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
	std::cout << "num1 will be incremented by 1 and the result will be num2.\n";
	return ++num1; 
}

std::string returnString()
{
	std::string message;
	
	std::cout << "===returnString===\n";
	std::cout << "Write a message: ";
	std::cin.ignore();
	getline(std::cin, message);

	return message;
}
