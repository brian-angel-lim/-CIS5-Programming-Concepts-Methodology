//program that demonstrates increments, also has puzzles for the user to solve at run time
//Assume the following are ints:
// a++ = increment 1 after the value is used in an expression (postfix)
// ++a = increment 1 before the value is used in an expression (prefix)
// a-- = decrament 1 after the value is used in an expression (postfix)
// --a = decrement 1 before the value is used in an expression (prefix)
#include<iostream>

void PostVsPre();
int puzzle1(int score);
int puzzle2(int score);
int puzzle3(int score);

int main()
{
	int score = 0;

	PostVsPre();

	puzzle1(score);
	std::cout << "Score: " << score << "/4\n";
	puzzle2(score);
	std::cout << "Score: " << score << "/4\n";
	puzzle3(score);
	std::cout << "Score: " << score << "/4\n\n";

	return 0;
}

//explain difference between postfix & prefix increments
void PostVsPre()
{
	int num = 1;

	//Both num++ & ++num increase num by 1 
	std::cout << "num1 = 1;" << "\n";
	std::cout << "(num1++): " << num++ << "\n";
	std::cout << "(num1++):" << ++num << "\n\n";
	
	//reminder: postfix will cause the value to increment AFTER cout displays num. prefix will increment BEFORE. 
	int num2 = 4;

	std::cout << num2 << "\n"; //displays 4
	std::cout << num2++ << "\n"; //displays 4, then adds 1 to value
	std::cout << num2 << "\n"; //displays 5
	std::cout << ++num2 << "\n"; //adds 1 to num, then displays 6

	//same rules apply for decrements
	int num3 = 4;

	std::cout << num3 << "\n"; //displays 4
	std::cout << num3-- << "\n"; //displays 4, then subtracts 1 to value
	std::cout << num3 << "\n"; //displays 3
	std::cout << --num3 << "\n"; //subtracts 1 to num, then displays 2

	std::cout << "\n\n";
}

int puzzle1(int score)
{
	int answer1;
	int a = 18;
	int b = a++;
	int c = --b;
	int d = c++;

	std::cout << "\nPuzzle 1:\n";
	std::cout << "a = 18\n";
	std::cout << "b = a++\n";
	std::cout << "c = --b\n";
	std::cout << "d = c++\n";
	std::cout << "What does d display? ";
	std::cin >> answer1;

	if (answer1 == 18)
	{
		std::cout << "Correct!\n";
		return ++score;
	}
	else
	{
		std::cout << "Incorrect.\n";
		return score;
	}

}

int puzzle2(int score)
{
	int answer2;
	int answer3;
	int a = 2;
	int b = 5;
	int c = a * b++;

	std::cout << "\nPuzzle 2:\n";
	std::cout << "a = 2\n";
	std::cout << "b = 5\n";
	std::cout << "c = a * b++\n";
	std::cout << "What does c display?";
	std::cin >> answer2;

	if (answer2 == 10)
	{
		++score;
		std::cout << "Correct!\n";
	}
	else
	{
		std::cout << "incorrect.\n";
	}

	std::cout << "What does b display?\n";
	std::cin >> answer3;

	if (answer3 == 6)
	{
		std::cout << "Correct!\n";
		return ++score;
	}
	else
	{
		std::cout << "incorrect.\n";
		return score;
	}
}

int puzzle3(int score)
{
	std::cout << "\nPuzzle 3:\n";
	return score;
}