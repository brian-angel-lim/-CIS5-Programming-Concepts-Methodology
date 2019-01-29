//Sentinels allow the user to exit a loop when they are finished inputing values
#include <iostream>

int main()
{
	int game = 1; //game counter
	int points = 1; //holds number of points
	int total = 0; //accumulator

	std::cout << "Track the number of points your team has earned\n";
	std::cout << "Enter -1 when done\n\n";

	std::cout << "Enter points for game " << game << ": ";
	std::cin >> points;

	while (points != -1)
	{
		total += points;
		game++;
		std::cout << "Enter points for game " << game << ": ";
		std::cin >> points;
	}
	std::cout << "Total Points: " << total << "\n";

	return 0;
}

/*OUTPUT:
Track the number of points your team has earned
Enter -1 when done

Enter points for game 1: 4
Enter points for game 2: 5
Enter points for game 3: 9
Enter points for game 4: 0
Enter points for game 5: 0
Enter points for game 6: 0
Enter points for game 7: -1
Total Points: 18

C:\Users\micro\Documents\Programming\Angel\cpp\CIS5\5 - Loops, Files, and Increment-Decrement\sentinels\Debug\sentinels.exe (process 27004) exited with code 0.
Press any key to close this window . . .

*/