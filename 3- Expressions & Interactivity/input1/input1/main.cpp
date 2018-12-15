#include<iostream>
#include<string>
//Program that allows user to input data into variables via the cin & cin.get() command. 

int main()
{
	std::string name = "Vessel";
	int age;

	std::cout << "Hi. I know your name is " << name << ". Why don't you give me a new name, as well as your age? \n";
	
	//assigns string value to the variable name 
	std::cout << "Enter new name: ";
	std::cin >> name;
	//assigns int value to the variable age
	std::cout << "Enter age: ";
	std::cin >> age;

	//displays name and age with new values
	std::cout << "Wonderful. It is wonderful to meet you. " << name << ". Of age " << age << ". Wonderful indeed. \n\n";

	return 0;
}
//output:
/*Hi. I know your name is Vessel. Why don't you give me a new name, as well as your age?
Enter new name: Angel
Enter age: 21
Wonderful. It is wonderful to meet you. Angel. Of age 21. Wonderful indeed.


C:\Users\micro\Documents\Programming\Angel\cpp\3- Expressions & Interactivity\input1\Debug\input1.exe (process 12728) exited with code 0.
Press any key to close this window . . .
*/