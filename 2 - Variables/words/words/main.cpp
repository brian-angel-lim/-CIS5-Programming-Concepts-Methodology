#include<iostream>
#include<string>
//program to demonstrate usage of the string and char data types

int main()
{
	char letter = 'a';
	std::string word = "apple";
	std::string sentence = "Andy ate apples at Aether Academy";

	std::cout << letter << "\n" << word << "\n" << sentence << "\n\n";
	return 0;
}

//output:
/*
a
apple
Andy ate apples at Aether Academy
*/