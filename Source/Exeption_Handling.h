#pragma once

#include <iostream>

int quotient = 0;
int numerator = 10;
int denominator = 0;

int main()
{
	try
	{
		if (denominator == 0)
		{
			throw denominator;
		}

		quotient = numerator / denominator;
	}
	catch (int ex)
	{
		std::cout << "Divide by 0 error!: " << ex << '\n';
	}

	std::cout << "Quotient = " << quotient << '\n';
	std::cin.get();
}