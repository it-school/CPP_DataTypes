#include <iostream>
#include <limits>
#include <cmath>

int s = 10;
/// <summary>
/// Calculates sum of two integers
/// </summary>
/// <param name="a"> - 1 number</param>
/// <param name="b"> - 2 number</param>
/// <returns>sum of 2 numbers</returns>
int sum(int a, int b)
{
	int s = 4;
	return a + b;
}

int main()
{
	unsigned long long int ullint = 2345678976543234561;
	std::cout << "Hello World!\n\n";
	std::cout << "INT64_MAX = " << INT64_MAX << std::endl;
	std::cout << "INT32_MAX = " << INT32_MAX << std::endl;
	std::cout << "INT16_MAX = " << INT16_MAX << std::endl;

	int s = 3;

	sum(1, 2);
	char c = 100;
	int i = 1000;
	std::cout << std::endl << "c = " << (int)c << "\t i = " << i;
	//    i = c;
	//    std::cout << std::endl << "c = " << (int)c << "\t i = " << i;
	c = i;
	std::cout << std::endl << "c = " << (int)c << "\t i = " << i;

	std::cout << std::endl << "s = " << ::s;

	const int DAYS_IN_YEAR = 365;
	const float AVG_PRECIPITATIONS_PER_DAY = 0.8f;

	double precipitations = AVG_PRECIPITATIONS_PER_DAY * DAYS_IN_YEAR; // osadki za god
	std::cout << std::endl << "precipitations = " << precipitations;

	/*
		float x = 0.1;
		float z;

		if (cos(x) < 0 || sin(3 * x) == 0)
		{
			std::cout << std::endl << "No solutions";
		}
		else
		{
			z = 2 * 1 / tan(3 * x) - (log(cos(x)) / log(1 + pow(x, 2)));
			std::cout << std::endl << "Z = " << z;
		}
	*/
}
