#include <iostream>

void getSales(double *, int);
double totalSales(double *, int);

int main()
{
	const int QTRS = 4;
	double sales[QTRS];

	//Get sales data for all quarters
	getSales(sales, QTRS);

	
}