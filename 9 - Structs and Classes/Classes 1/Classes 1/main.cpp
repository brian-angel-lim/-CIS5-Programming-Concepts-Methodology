#include <iostream>
#include <string>

class Car
{
public:
	
	Car(){}

	Car(int x, std::string y, std::string z)
	{
		year = x;
		make = y;
		model = z;
	}

	void setMake(std::string x)
	{
		make = x;
	}

	std::string getMake()
	{
		return make;
	}

	void setModel(std::string x)
	{
		model = x;
	}

	std::string getModel()
	{
		return model;
	}

	void setYear(int x)
	{
		year = x;
	}

	int getYear()
	{
		return year;
	}
private:
	int year;
	std::string make;
	std::string model;
};

int main()
{
	Car samCar(1997, "Ford", "Mustang");
	Car jeffCar; 
	jeffCar.setYear(1986);
	jeffCar.setMake("Toyota");
	jeffCar.setModel("Corolla");

	std::cout << "Jeff's car is a " << jeffCar.getYear() << " " << jeffCar.getMake() << " " << jeffCar.getModel() << ".\n";
	std::cout << "Sam's car is a " << samCar.getYear() << " " << samCar.getMake() << " " << samCar.getModel() << ".\n\n";

	return 0;
}