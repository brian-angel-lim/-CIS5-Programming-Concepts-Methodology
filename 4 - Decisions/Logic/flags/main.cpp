//Program that demonstrates usage of flags (a variable that signals when a condition exists) as well as logic operators
//Flags are typically bools or ints

//===Logic Operator List===
//       && - And
//       || - Or
//        ! - not
#include<iostream>
#include<string>

void boolFlagExample();
void intFlagExample();
void logicOperators();

int main()
{
	boolFlagExample();
	std::cout << "\n\n";
	intFlagExample();
	std::cout << "\n\n";
	logicOperators();

	return 0;
}

void boolFlagExample()
{
	bool salesQuotaMet = false;
	int Quota_Amount = 5;
	int sales;

	std::cout << "Boolean version of flags. Input Sales: ";
	std::cin >> sales;

	std::cout << "\n";

	if (sales >= Quota_Amount)
		salesQuotaMet = true;
	else
		salesQuotaMet = false;

	//if (salesQuotaMet) 
	//is equivalent to:
	//if (salesQuotaMet == true)
	if (salesQuotaMet)
		std::cout << "You have met your sales quota.";
}

void intFlagExample()
{
	int salesQuotaMet = 0;
	int Quota_Amount = 5;
	int sales;

	std::cout << "Int version of flags. Input Sales: ";
	std::cin >> sales;

	std::cout << "\n";

	if (sales >= Quota_Amount)
		salesQuotaMet = 1;
	else
		salesQuotaMet = 0;

	if (salesQuotaMet)
		std::cout << "You have met your sales quota.";
}

void logicOperators()
{
	int myAge = 5;
	int age;
	std::string mySize = "Big";
	std::string size;

	std::cout << "Also, i'm looking for my dog. What is the age of your dog?: ";
	std::cin >> age;
	std::cout << "What is the size of your dog? (Small, Medium, Big): ";
	std::cin >> size;

	if (age == myAge && size == mySize)
		std::cout << "Thats my dog!!!";
	else if (age == myAge || size == mySize)
		std::cout << "Only one of those descriptions fits my dog";
	else if (age != myAge && size != mySize)
		std::cout << "That doesn't sound like my dog at all...";
	else
		std::cout << "What? I don't understand!!";
}

/*OUTPUT:
Boolean version of flags. Input Sales: 5

You have met your sales quota.

Int version of flags. Input Sales: 100

You have met your sales quota.

Also, i'm looking for my dog. What is the age of your dog?: 5
What is the size of your dog? (Small, Medium, Big): smoll
Only one of those descriptions fits my dog
C:\Users\micro\Documents\Programming\Angel\cpp\4 - Decisions\flags\Debug\Logic.exe (process 2604) exited with code 0.
Press any key to close this window . . .
*/