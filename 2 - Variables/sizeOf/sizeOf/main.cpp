#include<iostream>
#include<string>
//Program that writes a char, int, and string, as well as size of the number of bytes used by each variable using the sizeof() function. 

int main()
{
	char letter = 'a';
	int num = 5;
	std::string sentence = "Hello world...";

	std::cout << "Contained in this char is the letter " << letter << ". It's memory value is " << sizeof(letter) << "\n";
	std::cout << "Contained in this num is the number " << num << ". It's memory value is " << sizeof(num) << "\n";
	std::cout << "Countained in this string is the sentence " << sentence << ". It's memory value is " << sizeof(sentence) << "\n\n.";
	
	return 0;
}

//Output:
/*Contained in this char is the letter a. It's memory value is 1
Contained in this num is the number 5. It's memory value is 4
Countained in this string is the sentence Hello world.... It's memory value is 28

.
C:\Users\micro\Documents\Programming\Angel\cpp\2 - Variables\sizeOf\Debug\sizeOf.exe (process 23972) exited with code 0.
Press any key to close this window . . .*/