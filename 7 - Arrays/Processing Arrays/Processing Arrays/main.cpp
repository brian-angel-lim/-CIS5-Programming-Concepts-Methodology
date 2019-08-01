#include <iostream>

void assignArrays();
void comparingArrays();
void summingArrays();
void averageArray();
void lowHigh();

int main()
{
	assignArrays();
	summingArrays();
}

void assignArrays()
{
	const int SIZE = 4;
	int oldArray[SIZE] = { 10, 100, 1000, 10000 };
	int newArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		oldArray[i] = newArray[i];
	}
}

void comparingArrays()
{
	const int MAX = 5;
	int i;
	int firstArray[] = { 5, 10, 15, 20, 25 };
	int secondArray[] = { 5, 10, 15, 20, 25 };
	bool isEqual = true;

	//a while loop is used so that while there is a loop for each element, there is also a condition where isEqual MUST must be true
	while (isEqual = true && i < MAX)
	{
		if (firstArray[i] != secondArray[i])
		{
			isEqual = false;
		}
		i++;
	}
}

void summingArrays()
{
	//accumulator variable method
	//int total acts as the accumulator which holds the sum as it is added with each instance of a for loop
	const int NUM_UNITS = 4;
	int total = 0;
	int sumArray[NUM_UNITS] = { 10, 20, 30, 40 };

	//normal for loop
	for (int i = 0; i < NUM_UNITS; i++)
	{
		total += sumArray[i];
	}

	//range-based for loop
	total = 0;
	for (int val : sumArray)
	{
		total += val;
	}
}

void averageArray()
{
	const int NUM_SCORES = 10;
	double scores[NUM_SCORES];
	double total = 0;
	double average;

	//normal
	for (int i = 0; i < NUM_SCORES; i++)
	{
		total += scores[i];
	}
	average = total / NUM_SCORES;

	//for-each
	total = 0;
	for (int val : scores)
	{
		total += scores[val];
	}
	average = total / NUM_SCORES;
}

void lowHigh()
{
	//find the lowest and highest values in a numeric array
	const int SIZE = 5;
	int numbers[SIZE] = { 10, 20, 30, 40, 50 };
	int highest; 
	int lowest;

	//find highest
	highest = numbers[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (numbers[i] > highest)
			highest = numbers[i];
	}

	//find lowest
	lowest = numbers[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (numbers[i] < lowest)
			lowest = numbers[i]; 
	}
}