//list of loops in C++, including:
//while loop
//do while loop
//for loop
//loop - a control structure that causes statements or groups of statements to repeat
#include<iostream>

void whileLoop();
void doWhileLoop();
void forLoop();

int main()
{
	whileLoop(); //repeats block as long as expression in arugment is true. Is a pre-test loop and tests its expression before each iteration
	doWhileLoop(); //post-test loop, expression is tested after each itteration
	forLoop(); //ideal for performing a pre-determined number of iterations (ie. outputting the elements of an array)

	return 0;
}

/*
while(expression)
{
	statement
}
*/
void whileLoop()
{
	char choice = 'Y';
	int i = 0;

	std::cout << "While Loop:\n";
	while (choice == 'Y')
	{
		std::cout << "Enter loop? (Y or N): ";
		std::cin >> choice;
		toupper(choice); //bug - fix later - toupper appears to not function correctly

		if (choice == 'Y')
		{
			i++;
			std::cout << "\nLoops continues.\n";
			std::cout << "Loops: " << i << "\n";
		}
	}

	std::cout << "\nLoop ended\n";
	std::cout << "Loops: " << i << "\n\n";
}

/*
do
{
statement;
) while (expression)
*/
void doWhileLoop()
{
	char choice = 'N';

	std::cout << "Do-While Loop:\n";
	std::cout << "Your choice right now is " << choice << ".\n";

	do
	{
		std::cout << "I predict that I will be iterated, but not looped!\n";
	} while (choice == 'Y' || choice == 'y');

	std::cout << "\n";

	do
	{
		std::cout << "For real though, do you wanna repeat this loop? (Y or N): ";
		std::cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	std::cout << "\n";
}

/*
for (initialization; test for condition that ends loop; update)
{
	statement;
{
*/
void forLoop()
{
	std::cout << "For Loop: \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Right now, we are on index: " << i << "\n";
	}
}

/*OUTPUT:
While Loop:
Enter loop? (Y or N): Y

Loops continues.
Loops: 1
Enter loop? (Y or N): Y

Loops continues.
Loops: 2
Enter loop? (Y or N): Y

Loops continues.
Loops: 3
Enter loop? (Y or N): N

Loop ended
Loops: 3

Do-While Loop:
Your choice right now is N.
I predict that I will be iterated, but not looped!

For real though, do you wanna repeat this loop? (Y or N): Y
For real though, do you wanna repeat this loop? (Y or N): n

For Loop:
Right now, we are on index: 0
Right now, we are on index: 1
Right now, we are on index: 2
Right now, we are on index: 3
Right now, we are on index: 4

C:\Users\micro\Documents\Programming\Angel\cpp\CIS5\5 - Loops\loopList\Debug\loopList.exe (process 13572) exited with code 0.
Press any key to close this window . . .
*/