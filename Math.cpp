#include <iostream>

void Log(const char* message);


int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

void PrimitiveDataTypes()
{
	char character = 'S';
	char character2 = 77;
	std::cout << character << std::endl << character2 << std::endl;
	std::cout << "Getting sizeof char: " << sizeof(char) << std::endl;
	std::cout << "Getting sizeof short: " << sizeof(short) << std::endl;
	std::cout << "Getting sizeof int: " << sizeof(int) << std::endl;
	std::cout << "Getting sizeof long: " << sizeof(long) << std::endl;
	std::cout << "Getting sizeof long long: " << sizeof(long long) << std::endl;

	float number1 = 3.3f; // append an 'f' or 'F' for compiler to know its a float
	double number2 = 3.7;
	std::cout << number1 << std::endl << number2 << std::endl;
	std::cout << "Getting sizeof float: " << sizeof(float) << std::endl;
	std::cout << "Getting sizeof double: " << sizeof(double) << std::endl;

	bool decision = true;
	std::cout << decision << std::endl;
	std::cout << "Getting sizeof bool: " << sizeof(bool) << std::endl;
}