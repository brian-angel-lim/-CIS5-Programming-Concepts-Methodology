#include<iostream>
#include<math.h>
//Program that demonstrates math expressions as well as the math functions form the math.h library. 
int main()
{
	//note - math expressions are declared during variable creation
	int math0 = 1 + 1;
	int math1 = 1 - 1;
	int math2 = 1 * 5;
	int math3 = 4 / 2;
	int math4 = 5 % 3;
	int math5 = ((5 - 3) + 2);
	int math6 = pow(4, 2);
	int math7 = sqrt(16);

	std::cout << "Adding: " << math0 << "\n";
	std::cout << "Subtracting: " << math1 << "\n";
	std::cout << "Multiplying: " << math2 << "\n";
	std::cout << "Dividing: " << math3 << "\n";
	std::cout << "Mod: " << math4 << "\n";
	std::cout << "Math with parenthesis: " << math5 << "\n";
	std::cout << "Power: " << math6 << "\n";
	std::cout << "Power: " << math7 << "\n\n";

	return 0;
}

//output:
/*
Adding: 2
Subtracting: 0
Multiplying: 5
Dividing: 2
Mod: 2
Math with parenthesis: 4
Power: 16
Power: 4


C:\Users\micro\Documents\Programming\Angel\cpp\3- Expressions & Interactivity\math\Debug\math.exe (process 24676) exited with code 0.
Press any key to close this window . . .

*/