//introduces switches by demostrating the hard way and the switch way to implement menues
#include<iostream>

void hardWay(int adult_choice, int teen_choice, int child_choice, int baby_choice);
void switchWay(int adult_choice, int teen_choice, int child_choice, int baby_choice);

int main()
{
	const int adult_choice = 1;
	const int teen_choice = 2;
	const int child_choice = 3;
	const int baby_choice = 4;

	hardWay(adult_choice, teen_choice, child_choice, baby_choice);
	std::cout << "\n";
	switchWay(adult_choice, teen_choice, child_choice, baby_choice);
	std::cout << "\n\n";

	return 0;
}

void hardWay(int adult_choice, int teen_choice, int child_choice, int baby_choice)
{
	int choice;

	std::cout << "\t\t[[Pick category]]\n"
		<< "1. Adult\n"
		<< "2. Teen\n"
		<< "3. Child\n"
		<< "4. Baby\n\n"
		<< "Choice: ";
	std::cin >> choice;

	std::cout << "\n";

	if (choice == adult_choice)
		std::cout << "You are an adult";
	else if (choice == teen_choice)
		std::cout << "You are a teen";
	else if (choice == child_choice)
		std::cout << "You are a child";
	else if (choice == baby_choice)
		std::cout << "You are a wee lad";
	else
		std::cout << "BAD ANSWER";

}

void switchWay(int adult_choice, int teen_choice, int child_choice, int baby_choice)
{
	int choice;
	
	std::cout << "\t\t[[Pick category]]\n"
		<< "1. Adult\n"
		<< "2. Teen\n"
		<< "3. Child\n"
		<< "4. Baby\n\n"
		<< "Choice: ";
	std::cin >> choice;

	std::cout << "\n";

	switch (choice)
	{
	case 1: std::cout << "You are an adult";
		break;
	case 2: std::cout << "You are a teen";
		break;
	case 3: std::cout << "You are a child";
		break;
	case 4: std::cout << "You are a wee lad";
		break;
	default: std::cout << "BAD ANSWER";
	}
}

/*OUTPUT:
				[[Pick category]]
1. Adult
2. Teen
3. Child
4. Baby

Choice: 1

You are an adult
				[[Pick category]]
1. Adult
2. Teen
3. Child
4. Baby

Choice: 4

You are a wee lad


C:\Users\micro\Documents\Programming\Angel\cpp\4 - Decisions\menu\Debug\menu.exe (process 24944) exited with code 0.
Press any key to close this window . . .

*/