//crateProfit.sln - Program that calculates the volume (in cubic feet), production cost, costumer price, and profit of crates
//notes - really tempting to make a class here, but we're saving that for later
#include<iostream>

namespace prices {
	const double COST = 0.23;
	const double CHARGE = 0.5;
}
using namespace prices;

void displayGreeting(); //greeting message
double getVolume(); //reads dimensions input by user and returns volume
double getCost(double volume); //volume x 0.23
double getCharge(double volume); //volume x 0.5
double getProfit(double cost, double charge); //charge - cost
void displayReceipt(double volume, double cost, double charge, double profit); //displays volume, cost, charge, and profit

int main()
{
	double volume;
	double cost;
	double charge;
	double profit;

	displayGreeting();
	
	std::cout << "\nLets start with getting the dimensions of your crate. \n\n";
	volume = getVolume();
	cost = getCost(volume);
	charge = getCharge(volume);
	profit = getProfit(cost, charge);

	std::cout << "\n\nHere is your receipt: \n";
	displayReceipt(volume, cost, charge, profit);

	return 0;
}

double getVolume()
{
	double length;
	double width;
	double height;
	double volume;

	std::cout << "Enter the length: ";
	std::cin >> length;
	std::cout << "Enter the width: ";
	std::cin >> width;
	std::cout << "Enter the height: ";
	std::cin >> height;

	volume = length * width * height;
	std::cout << "Your volume is: " << volume << ".";
	
	return volume;
}

double getCost(double volume)
{
	return volume * COST;
}
double getCharge(double volume)
{
	return volume * CHARGE;
}
double getProfit(double charge, double cost)
{
	return cost - charge;
}

void displayReceipt(double volume, double cost, double charge, double profit)
{
	std::cout << "Volume: " << volume << "\n"
		<< "Cost: " << cost << "\n"
		<< "Charge: " << charge << "\n"
		<< "Profit: " << profit << "\n";
}

void displayGreeting()
{
	std::cout << "Greetings! Welcome to CrateCo. We have only the best selection of crates, custom fit for whatever your needs may be. ";
}
/*OUTPUT:
Greetings! Welcome to CrateCo. We have only the best selection of crates, custom fit for whatever your needs may be.
Lets start with getting the dimensions of your crate.

Enter the length: 5
Enter the width: 5
Enter the height: 5
Your volume is: 125.

Here is your receipt:
Volume: 125
Cost: 28.75
Charge: 62.5
Profit: 33.75

C:\Users\micro\Documents\Programming\Angel\cpp\3- Expressions & Interactivity\$Projects\crateProfit\Debug\crateProfit.exe (process 12852) exited with code 0.
Press any key to close this window . . .
*/
