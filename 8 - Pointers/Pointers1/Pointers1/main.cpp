#include <iostream>

int main()
{
	std::cout << "===& - address operator; returns memory address of a variable ===";
	int num1 = 5;
	int num2;

	std::cout << "&num1: " << &num1 << "\n"; //prints memory
	std::cout << "&num2: " << &num2 << "\n"; //memory

	num2 = 5;

	std::cout << "&num2: " << &num2 << "\n"; //memory

	std::cout << "===pointers intro===";
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	//int ptr2 = &num2 - error
	//int *ptr2 = num2 - error
	//int *ptr2 = 5;  - error
	//int *ptr2; - error

	std::cout << "ptr1: " << ptr1 << "\n"; //memory
	std::cout << "*ptr1: " << *ptr1 << "\n"; //value
	std::cout << "ptr2: " << ptr2 << "\n"; //memory
	std::cout << "*ptr2: " << *ptr2 << "\n"; //value

	std::cout << "===messing with pointers===";
	*ptr1 = 500;
	std::cout << "ptr1: " << *ptr1 << "\n";
	std::cout << "num1: " << num1 << "\n";
	//assigning, doing math operations, and passing the pointer works as if you're using the actual variable the pointer is pointing to
	ptr1 = &num2; //ptr1 is now pointing to num2;
	*ptr1 = 200;
	std::cout << "ptr1: " << *ptr1 << "\n";

	return 0;
}

