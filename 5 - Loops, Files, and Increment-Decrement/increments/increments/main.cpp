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

	score = puzzle1(score);
	std::cout << "Score: " << score << "/4\n";
	score = puzzle2(score);
	std::cout << "Score: " << score << "/4\n";
	score = puzzle3(score);
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

	std::cout << "Increments:\n";
	std::cout << num2 << "\n"; //displays 4
	std::cout << num2++ << "\n"; //displays 4, then adds 1 to value
	std::cout << num2 << "\n"; //displays 5
	std::cout << ++num2 << "\n\n"; //adds 1 to num, then displays 6

	//same rules apply for decrements
	int num3 = 4;

	std::cout << "Decrements:\n";
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
	std::cout << "What does c display? ";
	std::cin >> answer2;

	if (answer2 == 10)
	{
		++score;
		std::cout << "Correct!\n";
		std::cout << "Score: " << score << "/4\n";
	}
	else
	{
		std::cout << "incorrect.\n";
	}

	std::cout << "\nWhat does b display? ";
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
	int x = 0;
	char answer4;

	std::cout << "\nPuzzle 3:\n";

	std::cout << "int x = 0;\n";
	std::cout << "if (x++)\n"
		<< "{\n"
		<< "\tstd::cout << \"True\"\n"
		<< "else\n"
		<< "{\n"
		<< "\tstd::cout << \"False\"\n"
		<< "}\n\n";
	std::cout << "What does this statement display(T or F)? ";
	std::cin >> answer4;

	if (answer4 == 'T' || answer4 == 't')
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

/*
num1 = 1;
(num1++): 1
(num1++):3

Increments:
4
4
5
6

Decrements:
4
4
3
2



Puzzle 1:
a = 18
b = a++
c = --b
d = c++
What does d display? 18
Correct!
Score: 1/4

Puzzle 2:
a = 2
b = 5
c = a * b++
What does c display? 10
Correct!
Score: 2/4

What does b display? 6
Correct!
Score: 3/4

Puzzle 3:
int x = 0;
if (x++)
{
		std::cout << "True"
else
{
		std::cout << "False"
}

What does this statement display(T or F)? t
Correct!
Score: 4/4


C:\Users\micro\Documents\Programming\Angel\cpp\CIS5\5 - Loops, Files, and Increment-Decrement\increments\Debug\increments.exe (process 27128) exited with code 0.
Press any key to close this window . . .
*/