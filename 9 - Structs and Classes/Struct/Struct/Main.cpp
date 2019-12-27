#include<iostream>

struct dude
{
	char name[20];
	int age;
	int hotpockets;
};



int main()
{
	dude Nick = { "Nick", 22, 3 };
	dude newDude1;

	std::cout << "Meet my dude, " << Nick.name << ". He is " << Nick.age << " years old and has " << Nick.hotpockets << " hotpockets.";

	std::cout << "\n\nNow introduce me to your new dude, dude!\n";
	std::cout << "Name: ";
	std::cin >> newDude1.name;
	std::cout << "Age: ";
	std::cin >> newDude1.age;
	std::cout << "How my hotpockets does my dude have: ";
	std::cin >> newDude1.hotpockets;

	std::cout << "This is your dude: ";
	std::cout << "Hey dudes! I'm " << newDude1.name << ". I am " << newDude1.age << " and I have " << newDude1.hotpockets << " hotpockets. \n\n";


	return 0;
}