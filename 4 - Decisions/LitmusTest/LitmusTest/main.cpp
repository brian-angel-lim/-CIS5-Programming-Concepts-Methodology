#include<iostream>
#include<string>

bool isValid();
int main()
{
	const int LEGAL_AGE = 21;
	const bool LEGAL_CITIZENSHIP = true;
	const std::string LEGAL_STATE = "CA";
	
	int age;
	bool citizenship;
	std::string state;

	std::cout << "Club Membership Test. Please enter information: \n\n";
	std::cout << "Age: ";
	std::cin >> age;
	std::cout << "Legal Citizen(Y or N): ";
	citizenship = isValid();
	std::cout << "State: ";
	std::cin >> state;

	std::cout << "Here are your credentials:\n";
	std::cout << "Age: " << age << "\n";
	std::cout << "Citizenship: " << citizenship << "\n";
	std::cout << "State: " << state << "\n\n";

	if (age < LEGAL_AGE) {
		std::cout << "Sorry, you're not of legal age!\n";
	}
	else if (citizenship != LEGAL_CITIZENSHIP) {
		std::cout << "Sorry, you're not of legal citizenship!\n";
	}
	else if (state != LEGAL_STATE) {
		std::cout << "You can apply for cross-state membership!\n";
	}
	else
	{
		std::cout << "Congrats, you pass all of our rules. You're in.";
	}


	return 0;
}

bool isValid()
{
	char ans;

	std::cin >> ans;
	ans = toupper(ans);
	
	if (ans == 'Y')
		return true;
	else
		return false;
}

/*OUTPUT 1:
Club Membership Test. Please enter information:

Age: 21
Legal Citizen(Y or N): y
State: CA
Here are your credentials:
Age: 21
Citizenship: 1
State: CA

Congrats, you pass all of our rules. You're in.
C:\Users\micro\Documents\Programming\Angel\cpp\4 - Decisions\LitmusTest\Debug\LitmusTest.exe (process 11812) exited with code 0.
Press any key to close this window . . .

*/

/*OUTPUT 2:
Club Membership Test. Please enter information:

Age: 18
Legal Citizen(Y or N): Y
State: OR
Here are your credentials:
Age: 18
Citizenship: 1
State: OR

Sorry, you're not of legal age!

C:\Users\micro\Documents\Programming\Angel\cpp\4 - Decisions\LitmusTest\Debug\LitmusTest.exe (process 15580) exited with code 0.
Press any key to close this window . . .

*/
/*OUTPUT 3:
Age: 22
Legal Citizen(Y or N): y
State: OR
Here are your credentials:
Age: 22
Citizenship: 1
State: OR

You can apply for cross-state membership!

C:\Users\micro\Documents\Programming\Angel\cpp\4 - Decisions\LitmusTest\Debug\LitmusTest.exe (process 6932) exited with code 0.
Press any key to close this window . . .
*/