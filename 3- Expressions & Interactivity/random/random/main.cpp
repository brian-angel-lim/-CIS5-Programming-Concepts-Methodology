#include<iostream>
#include<cstdlib>
#include<ctime>
//messing around with rand() function
//rand() uses an algorithm that produces the same sequence of numbers each time the program is repeated on the same system

void displayRand(); //calls  & displays rand()
int main()
{
	//demonstrate unseeded rand() twice
	std::cout << "rand() without seed 1st try:\n";
	displayRand();	
	std::cout << "\n\n";
	
	//seed rand()
	unsigned int seed = time(0);	//create seed via system time
	srand(seed);	//seed random number generator
	
	//demonstrate seeded rand() twice
	std::cout << "rand() with seed 1st try:\n";
	displayRand();	
	std::cout << "\n";

	return 0;
}


void displayRand()
{
	std::cout << rand() << "\n";
	std::cout << rand() << "\n";
	std::cout << rand() << "\n";
}
/*OUTPUT 1:
rand() without seed 1st try:
41
18467
6334


rand() with seed 1st try:
6144
4850
32169


C:\Users\micro\Documents\Programming\Angel\cpp\3- Expressions & Interactivity\random\Debug\random.exe (process 4864) exited with code 0.
Press any key to close this window . . .
*/

/*OUTPUT 2:
rand() without seed 1st try:
41
18467
6334


rand() with seed 1st try:
6222
668
2157


C:\Users\micro\Documents\Programming\Angel\cpp\3- Expressions & Interactivity\random\Debug\random.exe (process 16040) exited with code 0.
Press any key to close this window . . .
*/