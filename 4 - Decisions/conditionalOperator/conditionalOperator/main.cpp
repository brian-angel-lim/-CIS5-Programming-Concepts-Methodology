//Conditional Operator - shorthand method of expressing a simple if/else statement. Format:
// argument expression ? expression : expression;
//both of these void functions are equivillant
#include<iostream>

void normalIf();
void conditionalOperator();

int main()
{
	normalIf();
	std::cout << "\n";
	conditionalOperator();

	return 0;
}

void normalIf()
{
	int x = 0;
	int y = 0;
	int z = 0;

	std::cout << "(normal) Enter a number: ";
	std::cin >> x;

	if (x < 0)
		y = 10;
	else
		z = 20;

	std::cout << "Here are your twins:\n";
	std::cout << y << "\n" << z;

}

void conditionalOperator()
{
	int x = 0;
	int y = 0;
	int z = 0;

	std::cout << "(conditional) Enter a number: ";
	std::cin >> x;

	x < 0 ? y = 10 : z = 20;

	std::cout << "Here are your twins:\n";
	std::cout << y << "\n" << z;
}

/*OUTPUT:
(normal) Enter a number: 4
Here are your twins:
0
20
(conditional) Enter a number: -4
Here are your twins:
10
0
C:\Users\micro\Documents\Programming\Angel\cpp\4 - Decisions\conditionalOperator\Debug\conditionalOperator.exe (process 15480) exited with code 0.
Press any key to close this window . . .
*/