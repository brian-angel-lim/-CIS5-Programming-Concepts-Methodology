#include<iostream>
#include<iomanip>
//program demonstrating various situations where variables would need to be typecasted, as well as setting the precision for decimals

double noCast(int books, int months);	//books/months w/o typecasting
double typeCast(int books, int months); //books/months w/ typecasting
void displayBPM(double perMonth);	//display perMonth
int main()
{
	int books;	//Number of books to read
	int months;	//Number of months spent reading
	double perMonth;	//Average number of books per month

	//user inputs number of books read and months spent reading books
	std::cout << "How many books do you plan to read? ";
	std::cin >> books;
	std::cout << "How many months will it take you to read them? ";
	std::cin >> months;

	perMonth = noCast(books, months);
	displayBPM(perMonth);
	std::cout << "\n";

	perMonth = typeCast(books, months);
	displayBPM(perMonth);

	std::cout << "\n\n";

	return 0;

}

double noCast(int books, int months)
{
	return books / months;
}

double typeCast(int books, int months)
{
	return static_cast<double>(books) / months;
}

void displayBPM(double perMonth)
{
	std::cout << std::setprecision(2) << perMonth;
}
/* OUTPUT:
How many books do you plan to read? 64
How many months will it take you to read them? 12
5
5.33333


C:\Users\micro\Documents\Programming\Angel\cpp\3- Expressions & Interactivity\typeCast\Debug\typeCast.exe (process 5044) exited with code 0.
Press any key to close this window . . .
*/