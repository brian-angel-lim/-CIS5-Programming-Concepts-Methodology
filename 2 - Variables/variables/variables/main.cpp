#include<iostream>
#include<string>

int main()
{
	//sizeof(type) -- Operator that returns size of a data type. Replace type with the data type you wish to check the size of.
	//1 byte = 8 bits

	short shortInt = 1; //2 bytes
	unsigned short unsignedShortInt = 1; //2 bytes
	int integer = 1; //4 bytes
	unsigned int usignedInt = 1; //4 bytes
	long longInt = 1; //4 bytes
	unsigned unsignedLongInt = 1; //4 bytes
	long long longLongInt = 1; //8 bytes
	unsigned long long unsignedLongLongInt = 1; //8 bytes
	
	int improperInt = 1.5; //outputs as 1

	float floatingPoint = 1.1; //4 bytes
	double doublePoint = 1.1; //8 bytes
	long double longDoublePoint = 1.1; //16 bytes

	float improperFloat = 1; //also outputs as 1

	bool boolean = true; //1 byte 
	bool boolean2 = 1;

	char character = 'a'; //1 byte
	std::string stringValue = "Hello World"; //Total size = number of chracters, "Hello World" is 11 bytes (10 for the letters, 1 for the space)

	std::cout << improperInt << "\n";
	std::cout << improperFloat << "\n";


	return 0;
}